#include<stdio.h>

struct outer1
{
 char chChar;
 float fNo;
 union inner1
 {
  int iNo;
  char chChar;
  float fNo;
 }iobj1,iobj2;
} oobj1;

struct outer2
{
  char chChar;
  float fNo;
  union inner2
  {
    int iNo;
    float fNo;
  } iobj[2];
}oobj2;

int main(void)
{
  printf("size of oobj1 is : %d\n",sizeof(oobj1)); //sir  Output: 13  // compiler output 16

  printf("size of oobj2 is : %d\n",sizeof(oobj2)); //sir cha output 13    // compiler cha output 16

  return 0;
}