#include <stdio.h>

typedef struct
{
  char *name;
  int milage;
  int modal;
} Car;

Car addCar(Car car, char *name, int milage, int modal)
{
  car.name = name;
  car.milage = milage;
  car.modal = modal;

  return car;
}

int main(int argc, int argv)
{
  Car car1 = {"hello", 23, 23};
  Car c2;
  c2 = addCar(c2, "mercedes", 20, 3034);
  // printf("hello %lu \n",c2);
  printf("%s , %d, %d ", c2.name, c2.milage, c2.modal);
  printf("%s , %d, %d ", car1.name, car1.milage, car1.modal);
}