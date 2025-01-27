#include<stdio.h>

int main(void)
{

  const int iNo = 10;
  int *pPtr = &iNo;

  //++iNo; //error : iNo is constant
  //printf("%d\n",iNo);

  ++(*pPtr); //allowed pointer is pointing to non-constant
  printf("%d\n",pPtr);  //6422296   (100)

  ++pPtr; // allowed pPtr is non-constant
  printf("%d",pPtr); //6422300  (104)

  return 0;
}
