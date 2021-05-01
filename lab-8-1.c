#include <stdio.h>
#include <math.h>

void tersiniAl(int n)
{
  int basamak = 0;
  int bolen = 1;
  int sart = 1;
  int bolum;
  int gecici;
  int yeniSayi = 0;

  while(sart)
  {
      bolum = n / bolen;
      if(bolum != 0)
      {
        basamak++;
        bolen = bolen * 10;
      }
      else
        sart = 0;
  }

  for(int i = 0; i < basamak; i++)
  {
    gecici = n % 10;
    gecici = gecici * pow(10, (basamak - 1) - i);
    yeniSayi += gecici;
    n /= 10;
    printf("%d + ", gecici);
  }
  printf("%d", yeniSayi);
}

int main(void) 
{
  int sayi;
  scanf("%d", &sayi);
  tersiniAl(sayi);
  return 0;
}