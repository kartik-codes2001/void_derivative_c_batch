#include<stdio.h>

int main(void)
{

  int iNo = 10;
  int *p = &iNo;
  int **q = &p;
  int ***r = &q;
  int ****s = &r;
  int *****x = &s;
  int ******y = &x;
  int *******z = &y;

  printf("%d\n",p);  //6422296    //100
  printf("%d\n",*p); //10         
  printf("%d\n",q);  //6422292    //200
  printf("%d\n",**q); //10

  printf("%d\n",****z); //6422288  //300
  //printf("%d\n",****r); //compile time error: invalid type argument of unary '*' (have 'int') printf("%d\n",****r);
  printf("%d\n",****x);      //6422296  //100
  printf("%d\n",*******z);   //10
 
  printf("%d\n",&(***y));    //6422284   //400
  printf("%d\n",&(*****x));  //6422296   //100
  printf("%d\n",*(&(***s))); //6422296   //100
  printf("%d\n",&(*p));      //6422296   //100

  printf("%d\n",*(&(*p)));  //10
  printf("%d\n",iNo);      //10    
  printf("%d\n",&iNo);    //6422296      //100
  printf("%d\n",*(&iNo)); //10

  return 0;
}