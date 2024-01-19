#include <stdio.h>
#include <string.h>

// Function to concatenate two strings without using strcat()
void concatenateStrings(char str1[], const char str2[])
{
    int i, j;

    // Move the index i to the end of str1
    for (i = 0; str1[i] != '\0'; i++)
        ;

    // Copy characters from str2 to the end of str1
    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    // Null-terminate the concatenated string
    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the first string
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str2[strcspn(str2, "\n")] = '\0';

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0; // Exit successfully
}
