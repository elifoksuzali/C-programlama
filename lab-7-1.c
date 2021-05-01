#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2
#define R 3

int main(void) 
{
  srand(75);

  int a[M][N];
  int b[N][R];
  int c[M][R];
  int toplam;

  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < N; j++)
    {
      a[i][j] = rand() % 5;
    }
  }

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < R; j++)
    {
      b[i][j] = rand() % 5;
    }
  }

  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < N; j++)
    {
      printf("%4d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("\n");

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < R; j++)
    {
      printf("%4d ", b[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < M; i++)
  {
    for(int k = 0; k < R; k++)
    {
      for(int j = 0; j < N; j++)
      {
        toplam += a[i][j] * b[j][k];
      }
      c[i][k] = toplam;
      toplam = 0;
    }
  }

  printf("\n");
  printf("\n");

  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < R; j++)
    {
      printf("%4d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}