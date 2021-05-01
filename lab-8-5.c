#include <stdio.h>

struct student
{
  char name[20];
  int eng;
  int math;
  int phys;
  double mean;
  char grade;
};

struct student studentArray[]=
{
   {"Jack", 82, 72, 58, 0.0},
   {"Young", 77, 82, 79, 0.0},
   {"Steeve", 52, 62, 39, 0.0},
   {"Mark", 61, 82, 88, 0.0}
};

int main(void) 
{
  int i;

  for(i = 0; i < 4; i++)
  {
    studentArray[i].mean = (studentArray[i].eng + studentArray[i].math + studentArray[i].phys) / 3.0f;
  }

  for(i = 0; i < 4; i++)
  {
    if(studentArray[i].mean < 50)
    {
      studentArray[i].grade = 'F';
    }
    else if(studentArray[i].mean >= 50 && studentArray[i].mean < 62)
    {
      studentArray[i].grade = 'D';
    }
    else if(studentArray[i].mean >= 62 && studentArray[i].mean < 74)
    {
      studentArray[i].grade = 'C';
    }
    else if(studentArray[i].mean >= 74 && studentArray[i].mean < 86)
    {
      studentArray[i].grade = 'B';
    }
    else if(studentArray[i].mean >= 86 && studentArray[i].mean < 101)
    {
      studentArray[i].grade = 'A';
    }
  }

  for(i = 0; i < 4; i++)
  {
    printf("%12s Eng: %3d Math: %3d Phys: %3d Mean: %3.2f Grade: %c\n"
    , studentArray[i].name, studentArray[i].eng, studentArray[i].math, studentArray[i].phys, studentArray[i].mean, studentArray[i].grade);
  }

  return 0;
}