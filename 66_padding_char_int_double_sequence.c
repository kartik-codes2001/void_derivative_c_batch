#include<stdio.h>

struct demo1
{
  char chChar;
  double dNo;
  int iNo;
}obj1;

struct demo2
{
  char chChar;
  int iNO;
  double dNo;
}obj2;

int main(void)
{
  printf("Size of obj1 is : %d\n",sizeof(obj1)); //24

  printf("Size of obj2 is : %d\n",sizeof(obj2)); //16

  return 0;
}