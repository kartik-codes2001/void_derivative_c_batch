#include<stdio.h>

int main(void)
{

  int iNo = 10;
  int *pPtr = &iNo;

  ++iNo; //allowed iNo is not constant
  printf("++ iNo is : %d\n",iNo); //11

  ++(*pPtr); //allowed pointer is pointing to non-constant
  printf("%d\n",pPtr);  //6422296 (100)

  ++pPtr; // allowed pPtr is non-constant
  printf("%d",pPtr); //6422300 (104)

  return 0;
}