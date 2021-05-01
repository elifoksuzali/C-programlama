#include <stdio.h>

int fonksiyon(int deger)
{
	return deger * deger;
}

int main()
{
	int c = 5;

	printf_s("%d\n", c);
	c = fonksiyon(c); //pass by value
	printf_s("%d", c);
	
	return 0;
}