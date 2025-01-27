#include<stdio.h>
//default word size is 8
struct demo1
{
  char chChar;
  double dNo;
}obj1;

#pragma pack(4)

struct demo2
{
  char chChar;
  double dNO;
}obj2;

#pragma pack(1)

struct demo3
{
  char chChar;
  double dNO;
}obj3;

#pragma pack()

struct demo4
{
  char chChar;
  double dNO;
}obj4;

int main (void)
{
  printf("Size Of obj1 is : %d\n",sizeof(obj1)); //16

  printf("Size Of obj2 is : %d\n",sizeof(obj2)); //12

  printf("Size Of obj3 is : %d\n",sizeof(obj3)); //9

  printf("Size Of obj4 is : %d\n",sizeof(obj4)); //16

  return 0;
}