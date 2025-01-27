#include<stdio.h>

int main(void)
{
  int arr[] = {10,20,30,40,50};

  int *pPtr = &arr[0];

  printf("Before increment &pPtr is : %d\n",&pPtr); //6422280   //200
  printf("Before increment pPtr is : %d\n",pPtr);   //6422284   //100
  printf("Before increment *pPtr is : %d\n",*pPtr); //10

  ++pPtr;

  printf("After increment &pPtr is : %d\n",&pPtr); //6422280   //200
  printf("After increment pPtr is : %d\n",pPtr);   //6422288   //104
  printf("After increment *pPtr is : %d\n",*pPtr); //20

  return 0;  

}