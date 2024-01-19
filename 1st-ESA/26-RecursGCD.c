#include <stdio.h>

int findGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return findGCD(b, a % b);
    }
}

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers.\n");
        return 1;
    }

    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
