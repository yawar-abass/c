#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    // assigning the address of a function to a fuction pointer
    int (*ptr)(int, int) = add;
    // printf("%d ", &ptr);
    result = ptr(10, 20);
    printf("%d", result);
}

// callback and recursion