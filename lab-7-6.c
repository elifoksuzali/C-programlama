#include <stdio.h>
#include <ctype.h>

void cevir(char *str, int (*function)());

int main(void)
{
  char str[100];
  scanf("%s", str);
  cevir(str, tolower);
  cevir(str, toupper);

  return 0;
}

void cevir(char *str, int (*function)())
{
  if(function == tolower)
    printf("Lower case: ");
  else if(function == toupper)
    printf("Upper case: ");
  else
    return;

  while (*str)
  {
    printf("%c", (*function)(*str));
    str++;
  }
  printf("\n");
}