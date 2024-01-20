#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        ;

    printf("Length of string: %d\n", i);

    return 0;
}
