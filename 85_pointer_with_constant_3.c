#include<stdio.h>

int main(void)
{

  const int iNo = 10;
  const int *pPtr = &iNo;

  //++iNo; //error : iNo is constant
  //printf("%d\n",iNo);

  //++(*pPtr); //error : pointing to non-constant
  //printf("%d\n",pPtr);  

  ++pPtr; // allowed pPtr is non-constant
  printf("%d",pPtr); //6422300

  return 0;
}