#include<stdio.h>

struct demo
{
  int iNo1;
  int iNo2;
  int iNo3;
};

int main (void)
{
  struct demo obj;
 

  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1=0,obj.iNo2=3383296,obj.iNo3=4194432.

  obj.iNo1=10;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=10,obj.iNo2=3383296,obj.iNo3=4194432.

  obj.iNo2=20;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=10,obj.iNo2=20,obj.iNo3=4194432.

  obj.iNo3=30;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=10,obj.iNo2=20,obj.iNo3=30.

  return 0;

}