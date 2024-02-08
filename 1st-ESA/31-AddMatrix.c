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
    int arr2[SIZE][SIZE];
    int arrSum[SIZE][SIZE];

    printf("Enter elements for 1st array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter for position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter elements for 2nd array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter for position (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nArray 1:");
    displayMatrix(arr);

    printf("\nArray 2:");
    displayMatrix(arr2);

    for (int i = 0; i < SIZE; i++)
    {

        for (int j = 0; j < SIZE; j++)
        {
            arrSum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    printf("Sum of Matrix:");
    displayMatrix(arrSum);
}
