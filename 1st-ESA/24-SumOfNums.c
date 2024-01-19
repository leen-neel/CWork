#include <stdio.h>

int sumOfNums(int n)
{

    if (n == 0)
        return 0;

    return n + sumOfNums(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sumOfNums(n));
    return 0;
}
