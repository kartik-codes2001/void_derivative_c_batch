#include<stdio.h>

struct demo
{
  int iNo;
  float fNo;
};

int main (void)
{
  struct demo obj1;
  struct demo obj2;
  struct demo obj3;

  printf("Enter obj1 value : \n"); 
  printf("Enter integer :\t");
  scanf("%d",&obj1.iNo);

  printf("Enter float :\t");
  scanf("%f",&obj1.fNo);

  obj2=obj1;
  obj3.iNo=obj1.iNo;
  obj3.fNo=obj1.fNo;

printf("\nobj1 value are \n");
printf("integer value is : %d\n",obj1.iNo);
printf("float value is : %f\n",obj1.fNo);

printf("\nobj2 value are \n");
printf("integer value is : %d\n",obj2.iNo);
printf("float value is : %f\n",obj2.fNo);

printf("\nobj3 value are \n");
printf("integer value is : %d\n",obj3.iNo);
printf("float value is : %f\n",obj3.fNo);

return 0;

}
/*OUTPUT*/
/*
Enter integer : 10
Enter float :   99.99f

obj1 value are
integer value is : 10
float value is : 99.989998

obj2 value are
integer value is : 10
float value is : 99.989998

obj3 value are
integer value is : 10
float value is : 99.989998
*/