#include<stdio.h>

void Fun(void);

static int g_iNo = 20;

int main(void)
{

  //extern int g_iNo;

  printf("In main : %d\n", g_iNo); // 20

  Fun();

  return 0;
}