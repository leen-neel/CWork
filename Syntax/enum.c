#include <stdio.h>

int main()
{

    enum Level
    {
        LOW = 1,
        MEDIUM, // Now 6
        HIGH    // Now 7
    };

    enum Level myLevel = MEDIUM;

    switch (myLevel)
    {
    case 1:
        printf("Low Level");
        break;
    case 2:
        printf("Medium level");
        break;
    case 3:
        printf("High level");
        break;
    }
}
