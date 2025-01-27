#include<stdio.h>

struct demo
{
 char chChar;
 double dNo;
};
#pragma pack(1) // ya line cha effect declaration she asto object sobat nasto.
struct demo obj;

int main(void)
{
  printf("size of obj : %d",sizeof(obj)); //16

  return 0;
}