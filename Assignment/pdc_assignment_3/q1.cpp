#include <iostream>
#include <mpi.h>
using namespace std;
#define total_rows 4
#define total_col 4
int main(int argc,char* argv[])
{
int rank,size;
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&rank);
MPI_Comm_size(MPI_COMM_WORLD,&size);
if (size != total_rows) 
{
if(rank == 0)
{
    cout << "no of processors are not equal to no of rows." << endl;
}
MPI_Finalize();
return 1;
}
int rows[total_col];
int row_transpose[total_rows];
int output_matrix[total_rows][total_col];
int matrix[total_rows][total_col] = 
{
{1, 3, 5, 7},{2, 4, 6, 8},{11, 13, 15, 17},{12, 14, 16, 18}
};
MPI_Scatter(matrix,total_col,MPI_INT,rows,total_col,MPI_INT,0,MPI_COMM_WORLD);
for(int i=0;i<total_rows;i++)
{
MPI_Gather(&rows[i],1,MPI_INT,row_transpose,1,MPI_INT,i,MPI_COMM_WORLD);
}
cout<<"process "<<rank<<" is processing row"<<rank<<endl;
MPI_Gather(row_transpose,total_rows,MPI_INT,output_matrix,total_rows,MPI_INT,0,MPI_COMM_WORLD);
if(rank == 0)
{
cout<<"Final Transposed Matrix: "<<endl;
for(int i=0;i<total_rows;i++)
{
for(int j=0;j<total_col;j++) 
{
cout<<output_matrix[i][j]<< " ";
}
cout<<endl;
}
}
MPI_Finalize();
return 0;
}
