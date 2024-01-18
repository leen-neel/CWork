#include <stdio.h>
#include <math.h>

int isArmstrong(int n)
{

    int temp = n, sum = 0, digit = 0;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
    {
        printf("\n%d is an Armstrong number.\n", num);
        return 0;
    }

    printf("\n%d is not an Armstrong number.\n", num);
}
