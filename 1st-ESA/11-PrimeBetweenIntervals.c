#include <stdio.h>

int isPrime(int n)
{

    int flag = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{

    int start = 0, end = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start > end)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
