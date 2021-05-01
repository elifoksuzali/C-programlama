#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int limit;
	printf_s("Limit degerini giriniz: ");
	scanf_s("%d", &limit);

	for (int i = 1; i <= limit; i++)
	{
		printf_s("%d, ", fibonacci(i));
	}
}

