#include<stdio.h>

struct demo1
{
  char chChar;
  double dNo;
}obj1;

struct demo2
{
  int iNo;
  double dNo;
}obj2;

struct demo3
{
  int iNo;
  char chChar;
}obj3;

struct demo4
{
  char chChar1;
  char chChar2;
}obj4;

int main (void)
{
  printf("Size of obj1 is : %d\n",sizeof(obj1)); //16

  printf("Size of obj2 is : %d\n",sizeof(obj2)); //16

  printf("Size of obj3 is : %d\n",sizeof(obj3)); //8

  printf("Size of obj4 is : %d\n",sizeof(obj4)); //2

  return 0;
}

/*    IN 64 bit                      In 32 bit

Size of obj1 is : 16            Size of obj1 is : 12
Size of obj2 is : 16            Size of obj2 is : 12
Size of obj3 is : 8             Size of obj3 is : 8
Size of obj4 is : 2             Size of obj4 is : 2
*/