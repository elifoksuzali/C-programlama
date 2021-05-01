#include <stdio.h>

int main()
{
	int x = 1, y = 1;
	do {
		if (y < 10) {
			printf("%d x %d = %d\n", x, y, x * y);
			y++;
		}
		else {
			y = 1;
			x++;
			printf("********\n");
		}
	} while (x < 10);

	return 0;
}