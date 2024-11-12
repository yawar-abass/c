#include <stdio.h>

int getFactorial(int num);

void printFact(int num);

int main()
{
  printFact(5);
  // printf("%d", result);
}

int getFactorial(int num)
{
  int result = num;
  for (int i = num; i > 1; i--)
  {
    result *= (i - 1);
  }
  return result;
}

void printFact(int num)
{
  for (int i = 1; i <= num; i++)
  {
    int result = getFactorial(i);
    printf("%d ", result);
  }
}