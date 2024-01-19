#include <stdio.h>
#define SIZE 4

int main()
{

    int nums[SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter for index %d: ", i + 1);
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %f\n", (float)sum / SIZE);

    return 0;
}