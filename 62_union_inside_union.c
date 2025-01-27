#include<stdio.h>

union outer1
{
  int iNo;
  double dNo;
  union inner1
  {
    int iNo;
    float fNo;
  } iobj1,iobj2;
}oobj1;

union outer2
{
  int iNo;
  float fNo;
  union inner2
  {
    char chChar1;
    char chChar2;
  } iobj[6];
}oobj2;

int main(void)
{
  printf("size of oobj1 is : %d\n",sizeof(oobj1)); //8 higher memory double

  printf("size of oobj2 is : %d\n",sizeof(oobj2)); //8
}