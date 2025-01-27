#include<stdio.h>

struct demo
{
  int iNo;
  float fNo;
};

void print(struct demo);
void scan(struct demo*);

int main(void)
{
  struct demo obj;

  scan(&obj);
  print(obj);
 
  return 0;
}

void scan(struct demo *pPtr)
{
  printf("Enter integer : \t");
  scanf("%d",&pPtr->iNo);
  printf("Enter float : \t");
  scanf("%f",&pPtr->fNo);  
}

void print(struct demo obj)
{
  printf("Integer is %d\n",obj.iNo);
  printf("Float is %f\n",obj.fNo);
}

/*
Enter integer : 20
Enter float :   65.66
Integer is 20
Float is 65.660004
*/


