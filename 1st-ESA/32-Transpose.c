#include <stdio.h>
#define SIZE 2

void displayMatrix(int matrix[SIZE][SIZE])
{
    printf("\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%d  ", matrix[i][j]);
            if (j == SIZE - 1)
                printf("\n");
        }
    }
    printf("\n");
}

int main()
{

    int arr[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter for position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal Matrix:");
    displayMatrix(arr);

    for (int i = 0; i < SIZE; i++)
    {

        for (int j = 0; j < SIZE; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("Transpose Matrix:");
    displayMatrix(transpose);
}
