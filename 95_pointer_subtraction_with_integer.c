#include <stdio.h>

int main(void)
{
  float arr[] = {10.10f,20.20f,30.30f,40.40f,50.50f};

  float *pPtr = &arr[4];

  printf("%d\n",pPtr);    //6422296
  printf("%f\n",*pPtr);  //50.500000

  printf("%d\n",pPtr-3);  //6422284
  printf("%f\n",*(pPtr-3)); //20.200001

  //printf("%d\n",3-pPtr);
  // printf("%d\n",*(3-pPtr));

  printf("%d\n",pPtr);  //6422296
  printf("%f\n",*pPtr); //50.500000

  return 0;

}