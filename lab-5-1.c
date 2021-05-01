#include <stdio.h>

int main()
{
	int c = 5;
	int *p = &c;

	printf_s("%p\n", p);
	printf_s("%d\n", *p);
	printf_s("%p\n", &c);
	printf_s("%p\n", &p);
	printf_s("%p\n", &*p);
	printf_s("%p\n", *&p);
	
	return 0;
}