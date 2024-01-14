#include <stdio.h>

int main()
{

    char operator;
    double num1, num2, result;

    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second numebr: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            printf("\nError: Division by zero\n");
            return 0;
        }
        result = num1 / num2;
        break;
    }

    printf("\nResult: %.2lf\n", result);
}
