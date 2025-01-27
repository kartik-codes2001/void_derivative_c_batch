#include<stdio.h>

int main(void)
{
  int iNo = 10;
  int *pPtr = &iNo;

  printf("iNo is  : %d\n",iNo);   //10            
  printf("&iNo is : %d\n",&iNo);  //6422300       //100   

  printf("pPtr is : %d\n",pPtr);  //6422300       //100
  printf("&pPtr is: %d\n",&pPtr); //6422296       //200
 
  printf("*pPtr is: %d\n",*pPtr); //10

  *pPtr = 20;
  printf("*pPtr is: %d\n",*pPtr); //20

  return 0;

}