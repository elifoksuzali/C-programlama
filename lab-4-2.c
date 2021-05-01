#include <stdio.h>
#include <stdlib.h>

int fibonacci(int limit)
{
	int terim1 = 1;
	int terim2 = 1;
	int gelecekTerim;
	for (int i = 1; i <= limit; i++)
	{
		printf_s("%d, ", terim1);
		gelecekTerim = terim1 + terim2;
		terim1 = terim2;
		terim2 = gelecekTerim;
	}
}

int main()
{
	fibonacci(10);
}

