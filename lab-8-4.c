#include <stdio.h>
#include <math.h>

struct point
{
  int x;
  int y;
};

double euclid(struct point p1, struct point p2)
{
  double sonuc = 0;
  sonuc = pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2);
  sonuc = sqrt(sonuc);
  return sonuc;
}

int main(void) 
{
  struct point nokta1;
  struct point nokta2;

  nokta1.x = 5;
  nokta1.y = 10;

  nokta2.x = 12;
  nokta2.y = 15;

  printf("Ýki nokta arasi uzaklik: %.2f", euclid(nokta1, nokta2));
  return 0;
}