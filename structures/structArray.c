#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct
{
    char name[50];
    int age;

} Person;

void addPerson(Person *p, char *name, int age)
{
    strcpy(p->name, name);
    p->age = age;
}

void display(Person *p)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Name : %s , Age : %d \n", p[i].name, p[i].age);
    }
}

int main()
{

    Person p[SIZE];

    addPerson(&p[0], "Jhon Doe", 34);
    addPerson(&p[1], "Emily wilson", 23);
    addPerson(&p[2], "Bob", 22);

    display(p);

    return 0;
}