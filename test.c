#include <stdio.h>
#include <string.h>

struct person
{
    char name[10];
    int age;
};

int main()
{
    FILE *fp;
    fp = fopen("texo.bin", "wb+");
    if (fp == NULL)
    {
        printf("file not found");
        return 0;
    }

    struct person p1;
    strcpy(p1.name, "Yawar");
    p1.age = 21;

    fwrite(&p1, sizeof(p1), 1, fp);

    rewind(fp);

    struct person p2;
    fread(&p2, sizeof(p2), 1, fp);

    printf(" %s", p2.name);
    return 0;
}