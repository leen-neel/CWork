#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{

    return (a * b) / gcd(a, b);
}

int main()
{

    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    if (a < 0 || b < 0)
    {
        printf("Error: Negative numbers\n");
        return 1;
    }

    printf("\nLCM of %d and %d is: %d\n", a, b, lcm(a, b));
}
