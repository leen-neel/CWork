#include <stdio.h>

int main()
{

    int num = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // check if num is a prime or not
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("\n%d is a prime number.\n", num);
    }
    else
    {
        printf("\n%d is not a prime number.\n", num);
    }
}
