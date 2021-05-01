#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void printArray(int dizi[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf_s("%d, ", dizi[i]);
	}
	printf_s("\n\n");
}

int main(void)
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int flag = 0;
	int index = 0;

	srand(10);

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (a[i] == a[j] && i != j)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			b[index] = a[i];
			index++;
		}
	}

	printArray(a, SIZE);
	printArray(b, index);
	return 0;
}