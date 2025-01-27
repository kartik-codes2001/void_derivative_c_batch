#include<stdio.h>

int main(void)
{

  int iNo = 10;
  const int *pPtr = &iNo;

  ++iNo; //allowed iNo is not constant
  printf("%d\n",iNo); //11

  // ++(*pPtr); //error pointing to constant (error: increment of read-only location '*pPtr'++(*pPtr);)
  // printf("%d\n",pPtr);

  ++pPtr; // allowed pPtr is non-constant
  printf("%d",pPtr); //6422300 

  return 0;
}