#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fptr;
  int num;

  fptr = fopen("file.txt", "r");

  if(fptr == NULL)
  {
    printf("Error!");
    exit(1);
  }

  fseek(fptr, 5, SEEK_SET);

  while(!feof(fptr))
  {
    fscanf(fptr, "%d", &num);
    printf("Value: %d\n", num);
  }
  fclose(fptr);

  return 0;
}