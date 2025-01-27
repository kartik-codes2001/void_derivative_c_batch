#include <stdio.h>

int main(void)
{
  extern int iNo;
  extern float iNo;  //error because 2 different datatype

  printf("%d",iNo);

  return 0;
}
int iNo;

