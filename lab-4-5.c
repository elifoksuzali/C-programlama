#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

double mean(int dizi[])
{
	int toplam = 0;
	for (int i = 0; i < SIZE; i++)
	{
		toplam += dizi[i];
	}

	return (float)toplam / SIZE;
}

int bubbleSort(int dizi[])
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

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", dizi[i]);
	}

	printf("\n");
	printf("Median: %d", dizi[SIZE / 2]);
	printf("\n");
}

int mode(int dizi[])
{
	int dizi2[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		dizi2[dizi[i]] += 1;
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", dizi2[i]);
	}
}

int main()
{
	srand(5);

	int a[50];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 10;
		printf_s("%d, ", a[i]);
	}

	printf_s("\n");

	printf_s("Mean: %.2f\n", mean(a));
	bubbleSort(a);
	mode(a);
}