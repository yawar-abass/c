#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int modal;
} Car;

void writeStruct(Car car, FILE *fptr)
{
    if (fptr != NULL)
    {
        fwrite(&car, sizeof(Car), 1, fptr);
        return;
    }
    printf("file ptr is null");
}
void readStruct(Car *car, FILE *ftpr)
{
    fread(car, sizeof(Car), 1, ftpr);
}

int main()
{
    FILE *fptr;
    fptr = fopen("cars.bin", "rb+");
    Car car = {"BMW", 2023};
    Car car2 = {"mercedes", 2024};
    writeStruct(car, fptr);
    // writeStruct(car2, fptr);
    rewind(fptr);
    Car car3;

    readStruct(&car3, fptr);
    printf("%s %d", car3.name, car3.modal);
    fclose(fptr);
    return 0;
}