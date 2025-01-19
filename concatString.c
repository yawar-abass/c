#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strCat(char *source, char *target)
{

    char *result = (char *)malloc(strlen(source) + strlen(target));
    int index = 0, j = 0;
    while (source[index] != '\0')
    {
        result[index] = source[index];
        index++;
    }
    while (target[j] != '\0')
    {
        result[index] = target[j];
        j++;
    }
    // printf("%s", result);

    return result;
}

int main()
{
    char *str1 = "hello";
    char *str2 = "world";

    printf("%s", strCat(str1, str2));
}