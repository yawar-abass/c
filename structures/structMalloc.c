#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

typedef struct
{
    char name[20];
    int rollNo;
} Student;

int arr[10];

void display(Student *s)
{
    printf(" Name: %s, Roll No: %d", s->name, s->rollNo);
}

int main()
{

    Student *students[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        students[i] = (Student *)malloc(sizeof(Student));
        if (students[i] == NULL)
        {
            perror("Failed to allocate memory");
            exit(1);
        }
        students[i]->rollNo = i + 1;
        snprintf(students[i]->name, sizeof(students[i]->name), "Student%d ", i + 1);

        display(students[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        free(students[i]);
        students[i] = NULL;
    }

    return 0;
}