#include <stdio.h>

int main()
{

    int *ptr, *ptr2;

    int a = 10;
    int b = 23;

    ptr = &a;

    ptr2 = &b;

    printf("%u \n", ptr);
    printf("%u \n", ptr2);
    printf("%d \n", *(ptr2 + 1)); // adds the 4 bytes of int
}