#include<stdio.h>

struct inner
{
  int iNo;
  float fNo;
};
struct outer
{
    int iNo;
    float fNo;
    struct inner iobj;
 }oobj;

int main (void)
{
  printf("size of oobj is : %d",sizeof(oobj));  //16
  return 0;
}