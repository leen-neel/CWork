#include <stdio.h>

int main()
{

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }

    printf("\n");
    return 0;
}
