#include <stdio.h>

int main()
{
    FILE *fp;
    char string[100];
    fp = fopen("file.txt", "r");

    while (!feof(fp))
    {
        fgets(string, 100, fp);
        printf("%s", string);
    }

    fclose(fp);

    return 0;
}