#include<stdio.h>
#define MAX 3

int main(void)
{
  int arr[MAX];
  int iCounter;

  for(iCounter=0;iCounter<MAX;iCounter++)
  {
    printf("Enter number %d :\t",iCounter+1);
    scanf("%d",&arr[iCounter]);
  }

  for(iCounter = 0; iCounter<MAX; iCounter++)
    printf("Number%d is : %d\n",iCounter+1,arr[iCounter]);

  return 0;
}
/*Output
Enter number 1 :        5
Enter number 2 :        6
Enter number 3 :        7

Number1 is : 5
Number2 is : 6
Number3 is : 7
*/