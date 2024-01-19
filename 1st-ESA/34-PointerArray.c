#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    // Assign the address of the first element of the array to the pointer
    ptr = arr;

    // Access elements of the array using pointer
    printf("Elements of the array using pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
