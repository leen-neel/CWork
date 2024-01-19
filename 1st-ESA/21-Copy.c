#include <stdio.h>
#include <string.h>

int main()
{

    int i, j;
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    for (i = 0, j = 0; str1[i] != '\0'; i++)
    {
        str2[j++] = str1[i];
    }

    str2[j] = '\0';

    printf("Copied string: %s\n", str2);
}
