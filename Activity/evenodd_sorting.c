#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <cstdlib>
#include <ctime>
void CompareSplit(int nlocal_5675, int* elmnts_5675, int* relmnts_5675, int* wspace_5675, int keepsmall_5675)
{
    int i_5675, j_5675, k_5675;
    for (i_5675 = 0; i_5675 < nlocal_5675; i_5675++)
    {
        wspace_5675[i_5675] = elmnts_5675[i_5675];
    }

    if (keepsmall_5675)
    {
        for (i_5675 = j_5675 = k_5675 = 0; k_5675 < nlocal_5675; k_5675++)
        {
            if (j_5675 == nlocal_5675 || (i_5675 < nlocal_5675 && wspace_5675[i_5675] < relmnts_5675[j_5675]))
                elmnts_5675[k_5675] = wspace_5675[i_5675++];
            else
                elmnts_5675[k_5675] = relmnts_5675[j_5675++];
        }
    }
    else
    {
        for (i_5675 = k_5675 = nlocal_5675 - 1, j_5675 = nlocal_5675 - 1; k_5675 >= 0; k_5675--)
        {
            if (j_5675 == 0 || (i_5675 >= 0 && wspace_5675[i_5675] >= relmnts_5675[j_5675]))
                elmnts_5675[k_5675] = wspace_5675[i_5675--];
            else elmnts_5675[k_5675] = relmnts_5675[j_5675--];
        }
    }
}

int Incorder(const void* el_5675, const void* e2_5675)
{
    return (*((int*)el_5675) - *((int*)e2_5675));
}

int main(int argc, char* argv[])
{
    int n_5675;  
    int npes_5675;  
    int myrank_5675; 
    int nlocal_5675; 
    int* elmnts_5675;  
    int* relmnts_5675;  
    int oddrank_5675;  
    int evenrank_5675; 
    int* wspace_5675;  
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &npes_5675);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank_5675);
    n_5675 = atoi(argv[1]);
    nlocal_5675 = n_5675 / npes_5675;

    elmnts_5675 = (int*)malloc(nlocal_5675 * sizeof(int));
    relmnts_5675 = (int*)malloc(nlocal_5675 * sizeof(int));
    wspace_5675 = (int*)malloc(nlocal_5675 * sizeof(int));
    srand(myrank_5675);
    for (int i = 0; i < nlocal_5675; i++)
    {
        elmnts_5675[i] = rand();
    }
    printf("processer %d will be sorting elements:\n", myrank_5675);
    for (int i = 0; i < nlocal_5675; i++) {
        printf("%d ", elmnts_5675[i]);
        printf(" ");
    }
    printf("\n");
    qsort(elmnts_5675, nlocal_5675, sizeof(int), Incorder);
    printf("processer %d sorted elements:\n", myrank_5675);
    for (int i = 0; i < nlocal_5675; i++) {
        printf("%d ", elmnts_5675[i]);
        printf(" ");
    }
    printf("\n");
    if (myrank_5675 % 2 == 0)
    {
        oddrank_5675 = myrank_5675 - 1;
        evenrank_5675 = myrank_5675 + 1;
    }
    else
    {
        oddrank_5675 = myrank_5675 + 1;
        evenrank_5675 = myrank_5675 - 1;
    }
    if (oddrank_5675 == -1 || oddrank_5675 == npes_5675)
    {
        oddrank_5675 = MPI_PROC_NULL;
    }
    if (evenrank_5675 == -1 || evenrank_5675 == npes_5675)
    {
        evenrank_5675 = MPI_PROC_NULL;
    }
    MPI_Status status;
    for (int i = 0; i < npes_5675 - 1; i++)
    {
        if (i % 2 == 1)
        {
            MPI_Sendrecv(elmnts_5675, nlocal_5675, MPI_INT, oddrank_5675, 1, relmnts_5675, nlocal_5675,
                MPI_INT, oddrank_5675, 1, MPI_COMM_WORLD, &status);
        }
        else
        {
            MPI_Sendrecv(elmnts_5675, nlocal_5675, MPI_INT, evenrank_5675, 1,
                relmnts_5675, nlocal_5675, MPI_INT, evenrank_5675, 1, MPI_COMM_WORLD, &status);
        }
        CompareSplit(nlocal_5675, elmnts_5675, relmnts_5675, wspace_5675, status.MPI_SOURCE);

        printf("processer %d elements after applying comparesplit function:\n", myrank_5675);
        for (int i = 0; i < nlocal_5675; i++) {
            printf("%d ", elmnts_5675[i]);
        }
    }

    free(elmnts_5675);
    free(relmnts_5675);
    free(wspace_5675);
    MPI_Finalize();
}
