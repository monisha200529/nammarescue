#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
    int rank, size;

    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank % 2 == 0)
        printf("Process %d of %d is Even\n", rank, size);
    else
        printf("Process %d of %d is Odd\n", rank, size);

    MPI_Finalize();

    return 0;
}