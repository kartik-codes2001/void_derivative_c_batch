#include<stdio.h>

int main(void)
{
  double arr[] = {10.10,20.20,30.30,40.40,50.50};

  double*pPtr = &arr[0];

  printf("%d\n",pPtr);  //6422256      //100
  printf("%f\n",*pPtr); //10.100000

  printf("%d\n",pPtr+3);  //6422280     //124
  printf("%f\n",*(pPtr+3));//40.400000

  printf("%d\n",3+pPtr);  //6422280     //124
  printf("%f\n",*(3+pPtr)); //40.400000

  printf("%d\n",pPtr);  //6422256      //100
  printf("%f\n",*pPtr); //10.100000

  return 0;
}