#include <stdio.h>
#include <ctype.h>

int main()
{

    int i;
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            printf("%c", str[i]);
        }
        else if (str[i] == ' ')
        {
            printf(" ");
        }
    }
    printf("\n");
}
