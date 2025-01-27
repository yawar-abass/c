#include <stdio.h>

void display(int *arr)
{
    printf("[");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d, ", *(arr + i));
    }

    printf("]");
}

int main()
{

    int arr[5] = {1, 2, 4, 5, 6};

    display(arr);
}