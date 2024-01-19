#include <stdio.h>
#define SIZE 2

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE])
{

    // Initializing elements of matrix mult to 0
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            for (int k = 0; k < SIZE; ++k)
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
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
    int firstMatrix[SIZE][SIZE], secondMatrix[SIZE][SIZE], result[SIZE][SIZE];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("Enter for position (%d, %d): ", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\n");

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("Enter for position (%d, %d): ", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result);

    // Display the result
    printf("\nResultant matrix:\n");
    displayMatrix(result);

    return 0;
}
