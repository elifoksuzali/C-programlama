#include <stdio.h>
#include <string.h>

int main(void) 
{
  const char *str = "Rüstem ÖZAKAR";
  char ch = 'A';
  char *str2 = "KA";
  char *sonuc;
  char *sonuc2;

  sonuc = strchr(str, ch);
  sonuc2 = strstr(str, str2);
  printf("String after %c is %s\n", ch, sonuc);
  printf("String after %s is %s\n", str2, sonuc2);

  return 0;
}