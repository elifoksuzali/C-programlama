#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c;

	if (a < b)
		c = a;
	else
		c = b;

	printf("%d\n", c);

	c = (a < b) ? a : b;

	printf("%d\n", c);

	int d = 1;
	int e = 2;
	int f;

	if (d == 1)
	{
		if (e == 2)
			f = 3;
		else
			f = 5;
	}
	else
		f = 0;

	printf("%d\n", f);
				
	f = (d == 1 ? (e == 2 ? 3 : 5) : 0);

	printf("%d\n", f);

	return 0;
}