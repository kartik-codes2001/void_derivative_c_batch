#include<stdio.h>

int main(void)
{

  int iNo = 10;
  int const *const pPtr = &iNo;

  ++iNo; //allowed iNo is non-constant
  printf("%d\n",iNo);//11

  //++(*pPtr); //error pointing to constant
  //printf("%d\n",pPtr);

  // ++pPtr; // error : pPtr is constant
  // printf("%d",pPtr);

  return 0;
}
