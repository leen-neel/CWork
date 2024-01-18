#include <stdio.h>

int main()
{
    int i, j, rows;

    // Get the number of rows for the pyramid from the user
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Check if the input is valid
    if (rows <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Outer loop for rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop for spaces
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Inner loop for printing '*'
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0; // Exit successfully
}
