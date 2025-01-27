#include<stdio.h>

int main(void)
{
  char arr[] = {'A','B','C','D','E'};

  char *pPtr = &arr[4];

  printf("Before decrement pPtr is : %d\n",pPtr);   //6422299   //104
  printf("Before decrement *pPtr is : %c\n",*pPtr); //E

  --pPtr;

  printf("After increment pPtr is : %d\n",pPtr);   //6422298    //103
  printf("After increment *pPtr is : %c\n",*pPtr); //D

  return 0;  

}