#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    int age;
} Person;

int main()
{
    FILE *fp;
    fp = fopen("Person.bin", "rb+");
    Person p1 = {"Jhon Doe", 23};
    Person p2;

    fwrite(&p1, sizeof(Person), 1, fp);

    rewind(fp);

    fread(&p2, sizeof(Person), 1, fp);

    printf("%s %d \n", p2.name, p2.age);

    fclose(fp);
    return 0;
}
