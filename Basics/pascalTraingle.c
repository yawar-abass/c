#include <stdio.h>

void pascalsTraingle(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        int coef = 1;
        for (int k = 1; k <= i; k++)
        {
            printf(" %d", coef);
            coef = coef * (i - k) / k;
        }
        printf("\n");
    }
}

int main()
{
    pascalsTraingle(6);
    return 0;
}
