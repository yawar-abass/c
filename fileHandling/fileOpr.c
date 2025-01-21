#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string[100];
    fp = fopen("file.txt", "w+");

    if (fp == NULL)
    {
        exit(1);
    }

    fputs("I am writing to file", fp);

    rewind(fp);
    while (!feof(fp))
    {
        fgets(string, 100, fp);
        printf("%s", string);
    }

    fclose(fp);

    return 0;
}