#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fptr;
  int num;
  int condition = 1;

  fptr = fopen("file.txt", "w");

  if(fptr == NULL)
  {
    printf("Error!");
    exit(1);
  }

  while(condition==1)
  {
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    fputs("  ", fptr);
    printf("To continue enter 1:");
    scanf("%d", &condition);
  }

  return 0;
}