#include<stdio.h>

struct outer1
{
  int iNo1;
  float fNo1;
  struct inner1
  {
    int iNo2;
    float fNo2;
  };
}oobj1;

struct outer2
{
  int iNo;
  float fNo;
  struct inner2
  {
    int iNo;
    float fNo;
  }iobj1;

}oobj2;

struct outer3
{
  char chChar; 
  int iNo;    
  struct inner3
  {
    int iNo;
    float fNo;
  }iobj1,iobj2;
  double dNo;
}oobj3;

struct outer4
{
  char chChar; 
  double dNo;    
  struct inner4
  {
    int iNo;
    float fNo;
  }iobj[3];
}oobj4;

int main (void)
{
  printf("size of oobj1 is : %d\n",sizeof(oobj1));  //16

  printf("size of oobj2 is : %d\n",sizeof(oobj2));  //16

  printf("size of oobj3 is : %d\n",sizeof(oobj3));  //sir ch output 29  //compiler ch output 32

  printf("size of oobj4 is : %d\n",sizeof(oobj4));  //sir ch output 33  // compiler ch output 40

  return 0;
}