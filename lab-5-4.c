#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort(int *dizi)
{
	int temp;

	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}
	}
}

int main()
{
	srand(5);

	int a[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 10;
		printf_s("%d, ", a[i]);
	}

	printf_s("\n");
	bubbleSort(a);

	for (int i = 0; i < SIZE; i++)
	{
		printf_s("%d, ", a[i]);
	}
}