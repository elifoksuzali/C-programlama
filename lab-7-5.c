#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i1, i2, i3, i4;

  char str1[10];
  char str2[10];
  char str3[10];
  char str4[10];

  gets(str1);
  gets(str2);
  gets(str3);
  gets(str4);

  i1 = atoi(str1);
  i2 = atoi(str2);
  i3 = atoi(str3);
  i4 = atoi(str4);

  printf("Toplam: %d", i1 + i2 + i3 + i4);

  return 0;
}