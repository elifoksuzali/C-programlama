#include <stdio.h>

int main()
{
	int sayi = 0;
	int limit;

	printf("Hangi sayiya kadar acilsin? ");
	scanf_s("%d", &limit);

	printf("sayi     karesi      küpü\n");
	while (sayi < limit)
	{
		printf("%d     %d     %d\n", sayi, sayi * sayi, sayi * sayi * sayi);
		sayi++;
	}

	return 0;
}
}