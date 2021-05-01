#include <stdio.h>
#include <math.h>

int main(void) 
{
  int i = 0, count = 0;

  while(count < 689)
  {
    i++;

    if(i % 10 == 1)
    {
      count++;
      printf("%d. %d\n", count, i);
    }

    if((i % 100) / 10 == 1)
    {
      count++;
      printf("%d. %d\n", count, i);
    }

    if((i % 1000) / 100 == 1)
    {
      count++;
      printf("%d. %d\n", count, i);
    }

    if(i / 1000 == 1)
    {
      count++;
      printf("%d. %d\n", count, i);
    }
  }

  return 0;
}