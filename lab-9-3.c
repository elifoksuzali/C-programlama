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
  int condition = 0;
  int accountNumber = 0;

  struct clientData client = {0, "", "", 0.0};

  fptr = fopen("file.dat", "rb+");

  if(fptr == NULL)
  {
    printf("Error!");
    exit(0);
  }

  while(condition != -1)
  {
    printf("Enter name, surname, balance: ");
    scanf("%s %s %lf", client.firstName, client.lastName, &client.balance);

    client.accNum = accountNumber;

    fseek(fptr, accountNumber * sizeof(struct clientData), SEEK_SET);

    fwrite(&client, sizeof(struct clientData), 1, fptr);

    accountNumber++;

    printf("Enter -1 to halt, any other number to continue: ");
    scanf("%d", &condition);
  }
  fclose(fptr);
}