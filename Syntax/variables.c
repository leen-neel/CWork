#include <stdio.h>

int main()
{
    // int
    int age = 69420;
    printf("Age of consent is %d\n", age);

    // string
    char ch = 'N';
    printf("%c\n", ch);

    // float
    float nice = 6.9;
    printf("%f\n", nice);

    // double
    double funny = 69420.24;
    printf("%lf\n", funny);

    int x = 5;
    printf("%d %d %d\n", ++x, x++, ++x);
    printf("%d %d %d\n", x--, --x, x--);

    return 0;
}
