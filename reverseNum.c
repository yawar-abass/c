#include <stdio.h>

void reverseNumber(int num)
{
    int result = 0;

    while (num != 0)
    {
        int remainder = num % 10;
        result = (result * 10) + remainder;
        num = num / 10;
    }

    printf("%d", result);
}

int main()
{
    int num = 10;
    reverseNumber(num);
    return 0;
}