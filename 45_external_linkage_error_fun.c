#include<stdio.h>

g_iNo=10;

void Fun(void)
{
  printf("In Fun,%d",g_iNo); //warning: type defaults to 'int' in declaration of 'g_iNo'
}