#include<stdio.h>

void PrintNumbers(int);

int main(void)
{
  int iNo;

  printf("Enter number : ");
  scanf("%d", &iNo);   //5

  PrintNumbers(iNo);

  return 0;

}
void PrintNumbers(int iNo)
{
  if(iNo==0)
  return ;
  
  printf("%d",iNo);   //54321
  PrintNumbers(iNo-1);
  
}