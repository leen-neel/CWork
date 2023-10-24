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

    // string
    char name[] = "Neel";
    printf("%s\n", name);

    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("You entered %c\n", ch);

    return 0;
}
