#include<stdio.h>

int FactorialRecarsive(int);
int FactorialNonRecarsive(int);

int main(void)
{
int iNo;
int iAns;

printf("Enter Number: \t");
scanf("%d",&iNo);

iAns = FactorialRecarsive(iNo);
printf("Factorial (Recursive) of %d is %d\n",iNo,iAns);


iAns = FactorialRecarsive(iNo);
printf("Factorial (NonRecursive) of %d is %d\n",iNo,iAns);

return 0;
}

int FactorialRecarsive(int iNo)
{
  if(iNo == 0)
  return 1;

  return iNo * FactorialRecarsive(iNo - 1);
}
int FactorialNonRecursive(int iNo)
{
  int iAns;
  int iCounter;

  for(iCounter=iNo-1,iAns=iNo;iCounter!=1;iCounter--)
  iAns = iAns*iCounter;

  return iAns;
}

/*
Enter Number:  5
Factorial (Recursive) of 5 is 120
Factorial (Non-Recursive) of 5 is 120

*/
