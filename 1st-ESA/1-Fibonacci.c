#include <stdio.h>

void makeFibbo(int n)
{

    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    makeFibbo(n);
    return 0;
}
