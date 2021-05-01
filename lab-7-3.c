#include <stdio.h>
#include <string.h>

int main(void) 
{
  char str1[15];
  char str2[15];

  int sonuc;

  strcpy(str1, "abc");
  strcpy(str2, "def");

  sonuc = strcmp(str1, str2);

  if(sonuc == 0)
    printf("Stringler eþit");
  else 
    printf("Stringler farklý");

  return 0;
}