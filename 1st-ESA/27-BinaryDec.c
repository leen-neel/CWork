#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary)
{
    int decimal = 0, i = 0, remainder;

    while (binary != 0)
    {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimal)
{
    long long binary = 0;
    int remainder, i = 1;

    while (decimal != 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }

    return binary;
}

int main()
{
    int choice, decimal;
    long long binary;

    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Binary to Decimal
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
        break;

    case 2:
        // Decimal to Binary
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
        break;

    default:
        printf("Invalid choice.\n");
        return 1; // Exit with an error code
    }

    return 0; // Exit successfully
}
