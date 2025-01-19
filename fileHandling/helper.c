#include <stdio.h>
#include "helper.h"

void printArray(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("] \n");
}

void displayArrayWithAddress(int *arr, int size)
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