#include<stdio.h>

union
{
  char chChar;
  int iNo;
  double dNo;
}obj;

int main (void)
{

  printf("%c\n%d\n%d\n",obj.chChar,obj.iNo,obj.dNo); //obj.chChar=0,obj.iNo=0,obj.dNo=0.

  obj.chChar='A';
  printf("\n%c\n%d\n%f\n",obj.chChar,obj.iNo,obj.dNo);//obj.chChar=A,obj.iNo=65,obj.dNo=0.000000

  obj.iNo=10;
  printf("\n%c\n%d\n%f\n",obj.chChar,obj.iNo,obj.dNo);//obj.chChar=A,obj.iNo=10,obj.dNo=0.000000

  obj.dNo=99.99f;
  printf("\n%c\n%d\n%f\n",obj.chChar,obj.iNo,obj.dNo);//obj.chChar=A,obj.iNo=536870912,obj.dNo=99.989998

  printf("\n%d",sizeof(obj)); //sizeof(obj) = 8

  return 0;

}