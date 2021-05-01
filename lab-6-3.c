#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void printArray(int dizi[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf_s("%4d, ", dizi[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n\n");
}

int main(void)
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int toplam[SIZE][SIZE];

	srand(10);

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			a[i][j] = rand() % 100;
			b[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			toplam[i][j] = a[i][j] + b[i][j];
		}
	}

	printArray(a);
	printArray(b);
	printArray(toplam);
	return 0;
}