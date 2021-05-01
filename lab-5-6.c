#include <stdio.h>
#include <ctype.h>

void cevir(char* p)
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
	char dizi[] = "deneme yazisi";
	printf_s("%s\n", dizi);

	//ptr = dizi;
	cevir(dizi);

	printf_s("%s", dizi);
}