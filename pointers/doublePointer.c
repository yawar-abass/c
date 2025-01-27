#include <stdio.h>

int main()
{

    int *ptr;
    int **doublePtr;

    int a = 20;

    ptr = &a;

    doublePtr = &ptr;

    printf(" %u \n", ptr);
    printf("%u \n", doublePtr);
    printf("%d \n", ptr);

    printf("values \n");
    printf("%d \n ", *ptr);        // value of a
    printf("%d \n ", *doublePtr);  // address of ptr
    printf("%d \n ", **doublePtr); // value of a
}