#include <stdio.h>
#include <stdlib.h>

int matrisUret(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				printf_s("   1");
			else
				printf_s("%5d, ", rand()%100);
		}
		printf_s("\n");
	}
}

int main()
{
	int limit;
	printf_s("Limit degerini giriniz: ");
	scanf_s("%d", &limit);
	matrisUret(limit);
}