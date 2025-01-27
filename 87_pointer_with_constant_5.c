#include<stdio.h>

int main(void)
{

  int iNo = 10;
  int *const pPtr = &iNo;

  ++iNo; //allowed iNo is non-constant
  printf("%d\n",iNo);//11

  ++(*pPtr); //allowed pointer is pointing to non-constant
  printf("%d\n",pPtr);  //6422296   (100)

  // ++pPtr; // error : pointer is constant
  // printf("%d",pPtr);

  return 0;
}
