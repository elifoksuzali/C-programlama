#include <stdio.h>
#include <ctype.h>

void cevir(char *p)
{
	while (*p != '\0')
	{
		*p = toupper(*p);
		p++;
	}
}

int main()
{
	char* ptr;
	
	char dizi[] = { 1,2,3,4,5,6 };
	printf_s("%s\n", dizi);
	cevir(dizi);

	ptr = &dizi[0];

	for (int i = 0; i < 13; i++)
	{
		printf_s("%c, adresi: %p\n", *(ptr + i), (ptr + i));
	}

	ptr = &dizi[4];

	printf_s("5. eleman: %c, adresi: %p", dizi[4], ptr);
}