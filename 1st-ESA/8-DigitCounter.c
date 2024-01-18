#include <stdio.h>

int main()
{

    int num = 0, i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; num != 0; num /= 10)
    {
        i++;
    }

    printf("\nThere are %d digits in the number.\n", i);
    return 0;
}
