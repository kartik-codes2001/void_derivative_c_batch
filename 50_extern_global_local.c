#include<stdio.h>

int g_iNo;                //defination extern storage class
int g_iNo2=10;            //defination extern storage class
extern int g_iNo3;        //declaration no storage class
extern int g_iNo4=20;     //defination extern storage class

int main(void)
{
   int iNo1;              //defination auto storage class
   int iNo2=30;           //defination auto storage class
   extern int iNo3;       //declaration
  // extern int iNo4=40;  //error

  printf("This is g_iNo :%d\n",g_iNo);     //0
  printf("This is g_iNo2 :%d\n",g_iNo2);   //10
  //printf("This is g_iNo3 :%d\n",g_iNo3); //error: ld returned 1 exit status
  printf("This is g_iNo4 :%d\n",g_iNo4);  //20

   printf("This is iNo1 :%d\n",iNo1);      //4194432
   printf("This is iNo2 :%d\n",iNo2);      //30
   // printf("This is iNo3 :%d\n",iNo3);   //error: ld returned 1 exit status
   // printf("This is iNo4 :%d\n",iNo4);   //error: 'iNo4' has both 'extern' and initializer extern int iNo4=40;

  return 0;
}