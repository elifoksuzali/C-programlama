#include <stdio.h>

int main()
{
	int counter = -1;
	int grade;
	int total = 1;
	float average = 0.0f;

	do
	{
		counter++;
		printf("\nNot girisi yapiniz: ");
		scanf_s("%d", &grade);
		total = total + grade;
	} while (grade != -1);

	printf("%.3f", (float)total / counter);

	return 0;
}