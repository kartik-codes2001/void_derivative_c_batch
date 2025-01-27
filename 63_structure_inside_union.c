#include<stdio.h>

union outer1
{
  int iNo;
  double dNo;
  struct inner1
  {
    char chChar;
    int iNo;
  }iobj1,iobj2;
}oobj1;

union outer2
{
  int iNo;
  float fNo;
  struct inner2
  {
    char chChar1;
    char chChar2;
  }iobj[2];
}oobj2;

int main(void)
{
  printf("size of oobj1 is : %d\n",sizeof(oobj1)); // 8

  printf("size of oobj2 is : %d\n",sizeof(oobj2)); // 4
}