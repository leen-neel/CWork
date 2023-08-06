#include <stdio.h>

int main()
{
    int age = 18;

    printf("Age of consent is %d\n", age);

    int a = 0, b = 0, sum = 0;
    printf("\nEnter a number : ");
    scanf("%d", &a);

    printf("Enter another number : ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum is: %d\n", sum);

    return 0;
}
