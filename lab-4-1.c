#include <stdio.h>
#include <stdlib.h>

int usAlma(int taban, int us)
{
	int carpim = 1;
	for (int i = 0; i < us; i++)
	{
		carpim = carpim * taban;
	}
	return carpim;
}

int main()
{
	printf_s("%d", usAlma(5, 4));
}

