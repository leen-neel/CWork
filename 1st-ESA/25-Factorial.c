#include <stdio.h>

int factorial(int n)
{

    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d\n", n, factorial(n));
}
