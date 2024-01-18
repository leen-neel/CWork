#include <stdio.h>

int main()
{

    int num = 0, rev = 0, temp = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    if (temp == rev)
    {
        printf("\n%d is a palindrome.\n", temp);
    }
    else
    {
        printf("\n%d is not a palindrome.\n", temp);
    }

    return 0;
}
