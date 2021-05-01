#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	scanf("%c", &c);

	printf("isalnum: %s\n", isalnum(c) ? "Evet" : "Hayir");
	printf("iscntrl: %s\n", iscntrl(c) ? "Evet" : "Hayir");
	printf("isdigit: %s\n", isdigit(c) ? "Evet" : "Hayir");
	printf("isgraph: %s\n", isgraph(c) ? "Evet" : "Hayir");
	printf("ispunct: %s\n", ispunct(c) ? "Evet" : "Hayir");
	printf("isspace: %s\n", isspace(c) ? "Evet" : "Hayir");
	printf("isupper: %s\n", isupper(c) ? "Evet" : "Hayir");
	printf("islower: %s\n", islower(c) ? "Evet" : "Hayir");
	printf("tolower: %c\n", tolower(c));
	printf("toupper: %c\n", toupper(c));

	return 0;
}