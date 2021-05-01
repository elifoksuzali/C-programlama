#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int obeb, okek = 1;
	int bolen = 2;
	int limit;

	printf("Sayilari giriniz: ");
	scanf_s("%d %d", &sayi1, &sayi2);

	if (sayi1 > sayi2)
		limit = sayi2;
	else
		limit = sayi1;

	while (bolen < limit)
	{
		if (sayi1 % bolen == 0 && sayi2 % bolen == 0)
		{
			obeb = bolen;
		}
		bolen++;
	}

	okek = (sayi1 * sayi2) / obeb;

	printf("Obeb: %d", obeb);
	printf("\nOkek: %d", okek);	

	return 0;
}