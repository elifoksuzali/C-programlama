#include <stdio.h>
#include <string.h>

int counter = 0;

void counterFunction(char *p, int i)
{
  while(*p != '\0')
  {
    if(*p == '1')
    {
        counter++;
        printf("%d. %d\n", counter, i);
    }
    p++;
  }
}

int main(void) 
{
  int i = 0;
  short condition = 1;
  char str[5];

  while(condition)
  {
    i++;
    sprintf(str, "%d", i);
    counterFunction(str, i);

    if(counter == 689)
      condition = 0;
  }

  return 0;
}