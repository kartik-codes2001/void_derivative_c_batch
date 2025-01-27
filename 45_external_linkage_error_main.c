#include <stdio.h>

void Fun(void);
int main(void)
{
  extern int g_iNo;
  printf("In main, %d",g_iNO); //error

  Fun();

  return 0;

}
int g_iNo = 10;

//.\45_external_linkage_error_main.c:7:24: note: each undeclared identifier is reported only once for each function it appears in