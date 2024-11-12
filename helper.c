#include <stdio.h>

extern void displayArray(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("] \n");
}

extern void displayArrayWithAdd(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(" ele : %d, add: %u \n", arr[i], &arr[i]);
    }
    printf("]");
}

void displayTwoDArray(int *arr[], int rows, int cols)
{
    printf("[ \n");
    for (int i = 0; i < rows; i++)
    {
        printf("   {");
        for (int j = 0; j < cols; j++)
        {
            printf("%d,", arr[i][j]);
        }
        printf("} \n");
    }
    printf("]");
}