#include <stdio.h>

int main()
{

    char str[20], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, 20, stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("\n%c has appeared %d times.\n", ch, count);
}
