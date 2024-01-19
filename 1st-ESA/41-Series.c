#include <stdio.h>

// Function to print the series
void printSeries(int n)
{
    int term = 0;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {

            term = term * 10 + 4;
        }
        else
        {
            term = term * 10 + 3;
        }

        printf("%d ", term);
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Series: ");
    printSeries(n);
    printf("\n");

    return 0;
}
