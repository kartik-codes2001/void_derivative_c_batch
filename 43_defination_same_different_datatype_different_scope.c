#include<stdio.h>

int iNo = 10;
void Fun(void);

int main (void)
{
  int iNo = 20;

  printf("%d\n",iNo); //20

 {
  char iNo = 'A';
  printf("%d\n",iNo); //65
 }

 printf("%d\n",iNo); //20

 Fun();

 return 0;

}

void Fun(void)
{
  printf("%d\n",iNo); //10
}