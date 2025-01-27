#include<stdio.h>

struct demo
{
  int iNo;
  float fNo;
};

void AssignObjects(struct demo const*,struct demo*,struct demo*);

int main(void)
{
  struct demo obj1;
  struct demo obj2;
  struct demo obj3;

  printf("Enter obj1 values : \n");
  printf("Enter integer : ");
  scanf("%d",&obj1.iNo);
  printf("Enter float : ");
  scanf("%f",&obj1.fNo);

  AssignObjects(&obj1,&obj2,&obj3);

  printf("\nobj1 values are \n");
  printf("Integer is %d\n",obj1.iNo);
  printf("Float is %f\n",obj1.fNo);

  printf("\nobj2 values are \n");
  printf("Integer is %d\n",obj2.iNo);
  printf("Float is %f\n",obj2.fNo);

  printf("\nobj3 values are \n");
  printf("Integer is %d\n",obj3.iNo);
  printf("Float is %f\n",obj3.fNo);   

  return 0;
}

void AssignObjects(struct demo const *pobj1, struct demo *pobj2, struct demo *pobj3)
{
  *pobj2 = *pobj1;

  pobj3 ->iNo = pobj1->iNo;
  pobj3 ->fNo = pobj1->fNo;

}
/*
Enter obj1 values : 
Enter integer : 30
Enter float : 66.55

obj1 values are
Integer is 30
Float is 66.550003

obj2 values are
Integer is 30
Float is 66.550003

obj3 values are
Integer is 30
Float is 66.550003
*/