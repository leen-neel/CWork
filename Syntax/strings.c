#include <stdio.h>

int main()
{
    char name[] = "Neel";
    printf("Helloooo, my name is %s\n", name);

    // take string input
    char name2[20];
    printf("\nEnter your name: ");
    scanf("%s", name2);
    printf("Helloooo, my name is %s\n", name2);

    return 0;
}
