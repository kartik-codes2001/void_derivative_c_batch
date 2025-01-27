#include<stdio.h>
#define Equal 1
#define NotEqual 0

struct demo
{
  int iNo;
  float fNo;
};

int CompareObject(struct demo,struct demo);

int main (void)
{
  int iRet;
  struct demo obj1;
  struct demo obj2;
 

  printf("Enter obj1 value : \n"); 
  printf("Enter integer :\t");
  scanf("%d",&obj1.iNo);

  printf("Enter float :\t");
  scanf("%f",&obj1.fNo);

  printf("Enter obj2 value : \n"); 
  printf("Enter integer :\t");
  scanf("%d",&obj2.iNo);

  printf("Enter float :\t");
  scanf("%f",&obj2.fNo);

  printf("\nobj1 value are \n");
  printf("integer value is : %d\n",obj1.iNo);
  printf("float value is : %f\n",obj1.fNo);

  printf("\nobj2 value are \n");
  printf("integer value is : %d\n",obj2.iNo);
  printf("float value is : %f\n",obj2.fNo);

  iRet = CompareObject(obj1,obj2);

  if (Equal == iRet)
  printf("objects are Equal");
  else
  printf("objects are Not Equal");
  return 0;
 }
  int CompareObject(struct demo obj1,struct demo obj2)
  {
    if (obj1.iNo == obj2.iNo && obj1.fNo == obj2.fNo)
      return 1;
    return 0;
  }
  /*output*/
  /*
    Enter obj1 value : 
    Enter integer : 10
    Enter float :   55.66
    Enter obj2 value : 
    Enter integer : 10
    Enter float :   55.66

    obj1 value are
    integer value is : 10
    float value is : 55.660000

    obj2 value are
    integer value is : 10
    float value is : 55.660000
    objects are Equal
  */