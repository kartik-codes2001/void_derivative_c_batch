#include <stdio.h>

extern int No;

int main(void)
{
  
  extern float No;  //note: previous declaration of 'No' was here extern int No;

  printf("%f",No);  //error two different datatype

  return 0;
}

float No;

