#include<stdio.h>

int main(void)
{
 int iNo1;  //garbage value 4194432
 auto int iNo2; //garbage value 4079616

 printf("%d\n%d\n",iNo1,iNo2);

 return 0;
}