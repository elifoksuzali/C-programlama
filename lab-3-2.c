#include <stdio.h>

int main()
{
	int x;

	x = 5;

	printf("%d\n", x);
	printf("%d\n", x++);
	printf("%d\n", x);
	printf("%d\n", ++x);

	int a = 8;
	a++; //9
	int b = a++; // b = 9
	int c = ++a; // c = 11

	return 0;
}