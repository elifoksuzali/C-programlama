#include <stdio.h>

void printArray(int dizi[2][3])
{
   for(int i = 0; i < 2; i++)
   {
     for(int j = 0; j < 3; j++)
     {
       printf("%d, %d = %d", i, j, dizi[i][j]);
       printf("\n");
     }
   }
}

int main(void) 
{
  int a[2][3] = {{3, 1, 3}, 
                {1, 4, 4}};

  printArray(a);
  return 0;
}