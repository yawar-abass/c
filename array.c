#include <stdio.h>
#include <string.h>

void fillArray(int *arr)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 2;
	}
}

void charArray(char cars[][10])
{

	for (int i = 0; i < 3; i++)
	{
		strcpy(cars[i], "car");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s ", cars[i]);
	}
}

int main()
{
	int nums[10];
	fillArray(nums);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", nums[i]);
	}

	char cars[3][10];

	charArray(cars);

	return 0;
}