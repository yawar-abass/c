#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 3, cols = 4;

    // Step 1: Allocate memory for an array of pointers
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Example: Initialize the 2D array and print it
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = i + j; // Assign some values
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
