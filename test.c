#include <stdio.h>
#include <conio.h>

#define SUM(a, b) (a + b);

void swap(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d", i);
    }
}

int main()
{

    int a = SUM(13, 4);

    printf("%d", a);
    return 0;
}