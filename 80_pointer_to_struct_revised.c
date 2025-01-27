#include <stdio.h>

struct demo 
{
  int iNo;
  float fNo;
};

void Scan(struct demo *);
void Print(struct demo const *);

int main(void)
{
  struct demo obj;

  Scan(&obj);
  Print(&obj);

  return 0;
}

void Scan(struct demo *pPtr) 
{
  printf("Enter integer:\t");
  scanf("%d", &pPtr->iNo);
  printf("Enter float:\t");
  scanf("%f", &pPtr->fNo);
}

void Print(struct demo const *pPtr) 
{
  printf("Integer is %d\n", pPtr->iNo);
  printf("Float is %f\n", (*pPtr).fNo);  // or pPtr->fNo
}

/*
Enter integer:  20
Enter float:    99.99
Integer is 20
Float is 99.989998
*/