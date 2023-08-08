#include <stdio.h>

int main()
{

    int num = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
