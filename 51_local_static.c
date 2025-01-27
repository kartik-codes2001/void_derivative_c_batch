#include<stdio.h>

void Fun1(void);
void Fun2();

int main(void)
{
  int iCounter;

  for(iCounter=0;iCounter<3;iCounter++)

  Fun1();
  {
    printf("%d\n",iCounter); 
  }

  for(iCounter=0;iCounter<3;iCounter++)

  Fun2();
  
  {
    printf("%d\n",iCounter);
  }
  return 0;

}

void Fun1()
{
  int iNo = 10;
  ++iNo;

  printf("In fun : %d\n",iNo); 

}

void Fun2()
{
  static int iNo = 10;
  ++iNo;
  printf("In fun2 : %d\n",iNo);
}
/*  Output
In fun : 11
In fun : 11 
In fun : 11 
3
In fun2 : 11
In fun2 : 12
In fun2 : 13
3
*/