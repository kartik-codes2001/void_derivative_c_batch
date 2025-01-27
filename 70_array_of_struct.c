#include<stdio.h>
#define MAX 3

struct demo
{
  int iNo;
  float fNo;
};

int main(void)
{
  int iCounter;
  struct demo arr[MAX];

  for(iCounter = 0; iCounter < MAX; iCounter++)
  {
    printf("\nEnter OBJ %d value\n",iCounter+1);
    printf("Enter interger : ");
    scanf("%d",&arr[iCounter].iNo);

    printf("Enter float : \t");
    scanf("%f",&arr[iCounter].fNo);
  }

  for(iCounter = 0;iCounter < MAX; iCounter++)
  {
    printf("\nOBJ %d value are\n",iCounter+1);
    printf("Integer is %d\n",arr[iCounter].iNo);
    printf("Float is %f\n",arr[iCounter].fNo);
  }

  return 0;

}
/* OUTPUT
Enter OBJ 1 value
Enter interger : 20
Enter float :   20.20

Enter OBJ 2 value
Enter interger : 30
Enter float :   30.30

Enter OBJ 3 value
Enter interger : 40
Enter float :   40.40

OBJ 1 value are
Integer is 20
Float is 20.200001

OBJ 2 value are
Integer is 30
Float is 30.299999

OBJ 3 value are
Integer is 40
Float is 40.400002
*/