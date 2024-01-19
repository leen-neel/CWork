#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            char lowercaseChar = tolower(str[i]);

            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Display the count of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0; // Exit successfully
}
