#include<stdio.h>

union
{
  int iNo1;
  int iNo2;
  int iNo3;
}obj;

int main (void)
{

  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1=0,obj.iNo2=0,obj.iNo3=0.

  obj.iNo1=10;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=10,obj.iNo2=10,obj.iNo3=10.

  obj.iNo2=20;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=20,obj.iNo2=20,obj.iNo3=20.

  obj.iNo3=30;
  printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);//obj.iNo1=30,obj.iNo2=30,obj.iNo3=30.

  printf("%d",sizeof(obj));  // sizeof(obj)=4

  return 0;

}