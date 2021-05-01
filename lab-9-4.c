#include <stdio.h>
#include <stdlib.h>

struct clientData
{
  unsigned int accNum;
  char lastName[15];
  char firstName[15];
  double balance;
};

int main()
{
  FILE *fptr;
  int result;

  struct clientData client = {0, "", "", 0.0};

  fptr = fopen("file.dat", "r");

  if(fptr == NULL)
  {
    printf("Error!");
    exit(0);
  }

  printf("%-3s %-8s %-8s %-5s\n\n", "Account N.", "Name", "Surname","Balance");

  while(!feof(fptr))
  {
      result = fread(&client, sizeof(struct clientData), 1, fptr);

      if(result != 0)
      {
        printf("%3d %8s %8s %.2f\n", client.accNum, client.firstName, client.lastName, client.balance);
      }
  }
  fclose(fptr);
}