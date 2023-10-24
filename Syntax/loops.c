#include <stdio.h>

int main()
{

    // int num = 0;
    // printf("Enter a number : ");
    // scanf("%d", &num);

    // printf("\n");

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d * %d = %d\n", num, i, num * i);
    // }

    int n = 10;
    // int t = 2;
    // int k = 5;

    // printf("2 ");
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d%d", t, k);
    //     }
    //     printf(" ");
    // }

    // printf("\n");

    // for (int j = 1; j <= n; j++)
    // {
    //     printf("%d ", t);
    //     t = t * 10 + k;
    //     k = 7 - k;
    // }
    // printf("\n");

    int d = 2, k = 1;
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", d * k);
            d = d * 10 + 2;
            k *= -1;
        }
    }

    return 0;
}
