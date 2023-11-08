#include <stdio.h>
#include <math.h>

int main()
{

    float f = 0.1;
    printf("%d\n", f == 0.1);   // prints 0 (false)
    printf("%d\n", 0.1 == 0.1); // prints 1 (true)

    float tolerance = 1e-6; // Define a small tolerance 1 x 10^-6

    if (fabs(f - 0.1) < tolerance)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}

/*

This happens because of the way floating point numbers are stored in memory.
They are stored in binary, and the computer can only store a finite number of digits.
So, when you try to store a number like 0.1, it is stored as a rough approximation of 0.1.
This is why the first printf statement prints 0.

The second printf statement prints 1 because it is comparing two strings, which are stored as 0.1.
This is why the second printf statement prints 1.

*/
