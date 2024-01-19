#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{

    int n, exponent;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", n, exponent, power(n, exponent));
}
