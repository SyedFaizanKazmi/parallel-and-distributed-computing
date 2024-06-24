#include <iostream>
#include <cstdlib>
#include <ctime>
#include <mpi.h>
using namespace std;
void matrix_data(int* matrix, int rows, int cols)
{
    for (int i = 0; i < rows * cols; i++)
    {
        matrix[i] = (rand() % 10) + 1;
    }
}
void print(int* matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i * cols + j] << " ";
        }
        cout << endl;
    }
}

void merge(int* array, int lft, int middle, int rght)
{
    int size1 = middle - lft + 1;
    int size2 = rght - middle;
    int* left = new int[size1];
    int* right = new int[size2];
    for (int i = 0; i < size1; i++)
    {
        left[i] = array[lft + i];
    }
    for (int j = 0; j < size2; j++)
    {
        right[j] = array[middle + 1 + j];
    }
    int i = 0, j = 0, k = lft;
    while (i < size1 && j < size2)
    {
        if (left[i] <= right[j]) {
            array[k] = left[i];
            i++;
        }
        else {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < size2) {
        array[k] = right[j];
        j++;
        k++;
    }

    delete[] left;
    delete[] right;
}
void mergeSort(int* array, int left, int right) {
    if (left < right) {
        int m = left + (right - left) / 2;
        mergeSort(array, left, m);
        mergeSort(array, m + 1, right);
        merge(array, left, m, right);
    }
}
long long rowProduct(int* row, int cols) {
    long long product = 1;
    for (int i = 0; i < cols; ++i) {
        product *= row[i];
    }
    return product;
}

int main(int argc, char* argv[])
{
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    srand(time(NULL));

    int row, col;
    if (rank == 0)
    {
        cout << "Enter number of rows: ";
        cin >> row;
        cout << "Enter number of columns: ";
        cin >> col;

        if (row != size) {
            cout << "no of processors are not equal to no of rows." << endl;
            MPI_Finalize();
        }
    }

    MPI_Bcast(&row, 1, MPI_INT, 0, MPI_COMM_WORLD);
    MPI_Bcast(&col, 1, MPI_INT, 0, MPI_COMM_WORLD);

    int* matrix = new int[row * col];

    if (rank == 0) {
        matrix_data(matrix, row, col);
        cout << "input matrix:" << endl;
        print(matrix, row, col);
    }

    int* local_rows = new int[col * (row / size)];

    MPI_Scatter(matrix, col * (row / size), MPI_INT, local_rows, col * (row / size), MPI_INT, 0, MPI_COMM_WORLD);

    for (int i = 0; i < row / size; ++i) {
        mergeSort(&local_rows[i * col], 0, col - 1);
    }

    int* sorted_matrix = nullptr;
    if (rank == 0) {
        sorted_matrix = new int[row * col];
    }

    MPI_Gather(local_rows, col * (row / size), MPI_INT, sorted_matrix, col * (row / size), MPI_INT, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        cout << "sorted matrix:" << endl;
        print(sorted_matrix, row, col);
    }
    long long* local_products = new long long[row / size];
    for (int i = 0; i < row / size; ++i) {
        local_products[i] = rowProduct(&local_rows[i * col], col);
    }

    long long global_product;
    MPI_Reduce(local_products, &global_product, 1, MPI_LONG_LONG, MPI_PROD, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        cout << "product of matrix: " << global_product << endl;
    }

    delete[] matrix;
    delete[] local_rows;
    delete[] sorted_matrix;
    delete[] local_products;

    MPI_Finalize();
}

