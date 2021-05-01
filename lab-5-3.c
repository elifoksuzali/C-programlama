#include <stdio.h>

void fonksiyon(int *p)
{
	// *p
	// **p = c
	(*p) = (*p) * (*p);
}

int main()
{
	int c = 5;

	printf_s("%d\n", c);
	fonksiyon(&c); //pass by reference
	printf_s("%d", c);
	
	return 0;
}