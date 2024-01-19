# Sample Paper Solution

## Question 1

a = 120, b, = 356, c = 450

## Question 2

x needs to be 0

## Question 3

1GB = 1024mb and 1048576kb

## Question 4

False

## Question 5

ABCTrue

## Question 6

124 times

## Question 7 (labeled as no. 6)

**Array:**

An arary is a collection of elements of the same type, stored in contiguous memory locations. Each element in an array is identified by an index or a key. The index starts from 0, and the last index is one less than the size of the array.

**`malloc()`:**

`malloc()` is a standard library function (included in the `stdlib.h` header) that stands for memory allocation. It is used to dynamically allocate memories to the heap during programs execution.

## Question 8:

**`break`:**

`break` is a control statement used inside loops (like `for`, `while` and `do-while`). When `break` is encountered inside a loop, it immediately terminates the loop, and the program continues with the next statement after the loop.

When `break` is used inside a `switch` statement, it exists the `switch` block.

**`exit()`:**

`exit()` is a function included inside the `stdlib.h` header that is used to terminate the entire program. It takes an integer argument, which is usually used as the exit status of the program.

## Question 9:

**Call by Value:**

In call by value, the actual value of the variable is passed in the function. The function recieves a copy of the value, and any modifications made to the parameter inside the function have no effect on the original value outside the function.

For example:

```c
#include <stdio.h>

void addTen(int num) {
    num = num + 10;
}

int main() {
    int x = 5;
    addTen(x);
    printf("Original value: %d\n", x);
    return 0;
}
```

**Call by Reference:**

In call by reference, the memory address of the actual argument is passed into the function. The function recieves a reference to the original data, and any changes made to the parameter inside the function affect the original data outside the function.

For example:

```c
#include <stdio.h>

void addTenByReference(int *num) {
    *num = *num + 10;
}

int main() {
    int x = 5;
    addTenByReference(&x); // Passing the address of the variable
    printf("Modified value: %d\n", x);  // Output: Modified value: 15
    return 0;
}
```

## Question 10

**`while` Loops:**

In a `while` loop, the loop condition is evaluated before the body is executed. If the condition is initially false, the loop will not be executed at all.

Example:

```c
#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
```

**`do-while` Loops:**

In a `do-while` loop, the body is executed at least once, and then the loop condition is evaluated. If the condition is initially false, the loop will execute once.

Example:

```c
#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i < 5);

    return 0;
}
```

## Question 11:

See [Program 42](https://github.com/leen-neel/CWork/blob/master/1st-ESA/42-LargestNum.c)

## Question 12:

See [Program 24](https://github.com/leen-neel/CWork/blob/master/1st-ESA/24-SumOfNums.c)

## Question 13:

See [Program 3](https://github.com/leen-neel/CWork/blob/master/1st-ESA/3-GCD.c)

## Question 14:

**Transpose:** See [Program 32](https://github.com/leen-neel/CWork/blob/master/1st-ESA/32-Transpose.c)

**Add:** See [Program 31](https://github.com/leen-neel/CWork/blob/master/1st-ESA/31-AddMatrix.c)

**Multiplication:** See [Program 33](https://github.com/leen-neel/CWork/blob/master/1st-ESA/33-MultiplyArray.c)

## Question 15:

Here's a simplified execution flow of a C program:

**1. Sourse Code:**

The source code is written using a text-editor or an IDE.

**2. Compilation:**

The compiler checks the source code for syntax errors and generates an assembly language file.

**Assembly:**

The assembler converts the assembly language file into an object file, which is a machine-readable file.

**Linking:**

The linker combines the object file with library files to create an executable file.
