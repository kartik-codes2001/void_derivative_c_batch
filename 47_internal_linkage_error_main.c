#include<stdio.h>

#include<stdio.h>

void Fun(void);

int main(void)
{
extern int g_iNo; //note: previous declaration of 'g_iNo' was here  extern int g_iNo;

printf("In main : %d\n",g_iNo);

Fun();

return 0;

}
static g_iNo = 20;
//warning: type defaults to 'int' in declaration of 'g_iNo' [-Wimplicit-int]  static g_iNo = 20;
//error: static declaration of 'g_iNo' follows non-static declaration