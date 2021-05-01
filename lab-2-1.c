#include <stdio.h>

int main()
{
	int x, y;
	char islem;
	int islemSonucu;
	float bolumSonucu;

	printf("Sayilari ve operatoru giriniz: ");
	scanf_s("%d %d %c", &x, &y, &islem);

	switch (islem)
	{
		case '+': 
		{
			islemSonucu = x + y;
			printf("Sonuc: %d", islemSonucu);
			break;
		}
		case '-':
		{
			if (x > y)
			{
				islemSonucu = x - y;
			}
			else
			{
				islemSonucu = y - x;
			}
			printf("Sonuc: %d", islemSonucu);
			break;
		}
		case '*':
		{
			islemSonucu = x * y;
			printf("Sonuc: %d", islemSonucu);
			break;
		}
		case '/':
		{
			if (x > y)
			{
				bolumSonucu = (float)x / y;
			}
			else
			{
				bolumSonucu = (float)y / x;
			}
			printf("Sonuc: %.2f", bolumSonucu);
			break;
		}
	}

	/*if (islem == '+')
	{
		islemSonucu = x + y;
		printf("Sonuc: %d", islemSonucu);
	}
	else if (islem == '-')
	{
		if (x > y)
		{
			islemSonucu = x - y;
		}
		else
		{
			islemSonucu = y - x;
		}
		printf("Sonuc: %d", islemSonucu);
	}
	else if (islem == '*')
	{
		islemSonucu = x * y;
		printf("Sonuc: %d", islemSonucu);
	}
	else if (islem == '/')
	{
		if (x > y)
		{
			islemSonucu = x / y;
		}
		else
		{
			islemSonucu = y / x;
		}
		printf("Sonuc: %d", islemSonucu);
	}
	else
	{
		printf("Yanlis operator girdiniz.");
	}*/

	return 0;
}