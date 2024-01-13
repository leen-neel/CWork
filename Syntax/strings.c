#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Neel";
    printf("Helloooo, my name is %s\n", name);

    // take string input
    char name2[20000];
    printf("\nEnter your name: ");
    // scanf("%[^\n]", name2);
    gets(name2);
    printf("Helloooo, my name is %s\n", name2);

    return 0;
}
