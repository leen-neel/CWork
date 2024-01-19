#include <stdio.h>
#define SIZE 4

int main()
{

    int nums[SIZE];
    int largst = nums[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter for index %d: ", i + 1);
        scanf("%d", &nums[i]);

        if (nums[i] > largst)
        {
            largst = nums[i];
        }
    }

    printf("\nLargest: %d\n", largst);
}
