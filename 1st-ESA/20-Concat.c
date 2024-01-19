#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    // Get the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the first string
    str1[strcspn(str1, "\n")] = '\0';

    // Get the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the second string
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate the two strings
    strcat(str1, str2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0; // Exit successfully
}
