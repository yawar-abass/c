#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20];
    for (int i = 0; i < 5; i++)
    {
        strcpy(*str[i], "hello");
    }

    printf(str[0][0]);
}