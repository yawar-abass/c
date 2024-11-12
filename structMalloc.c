#include <stdio.h>
#include <stdlib.h>
#include "helper.c"
#include <string.h>

struct Student
{
    char name[20];
    int rollNo;
};

int arr[10];

int main()
{
    struct Student *s1 = (struct Student *)malloc(sizeof(struct Student));
    strcpy(s1->name, "Test");
    s1->rollNo = 23;
    printf("%s", s1->name);

    free(s1);
    s1 = NULL;
    return 0;
}