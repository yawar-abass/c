#include <stdio.h>

union Data
{
    int a;
    char b;
};

int main()
{
    union Data data;

    data.a = 10;
    printf("%d \n", data.a);

    data.b = 'a';
    printf("%c \n", data.b);
    printf("%c\n", data.a);

    return 0;
}