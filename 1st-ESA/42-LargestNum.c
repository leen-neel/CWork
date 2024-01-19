#include <stdio.h>
#include <stdlib.h>

int findLargestNumber(int *arr, int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{

    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    int *numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d : ", i);
        scanf("%d", &numbers[i]);
    }

    int largest = findLargestNumber(numbers, n);

    printf("\nThe largest number is: %d\n", largest);

    free(numbers);

    return 0;
}
