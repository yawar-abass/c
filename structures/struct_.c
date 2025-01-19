#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

Date create(int, int, int);

int main(){

    Date d;
    printf("1. %u, %d, %d, %d\n", &d, d.day, d.month, d.year);
    Date d2 = create(20, 1, 2020);
    printf("2. %u, %d, %d, %d\n", &d2, d2.day, d2.month, d2.year);
    d = d2;
    printf("4. %u, %d, %d, %d\n", &d, d.day, d.month, d.year);
    return 0;
}

Date create(int day, int month, int year){
    Date d;
    printf("3. %u,  %d, %d, %d\n", &d, d.day, d.month, d.year);
    d.day = day;
    d.month = month;
    d.year = year;
    return d;
}