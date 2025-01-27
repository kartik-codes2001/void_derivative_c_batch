#include<stdio.h>
#define MAX 5

void AssignArray(int [], int [], int);

int main(void)
{
  int iCounter;
  int iElementCount;

  int arr1[MAX];
  int arr2[MAX];

  printf("Enter Array value :\n");

  printf("How many elements do you want to enter in array1 (<%d) : ",MAX);
  scanf("%d", &iElementCount);

    if (iElementCount > MAX)
    {
      printf("Invalid Input, You can enter a maximum of %d elements.\n", MAX);
      return 1;
    }

    printf("\nEnter arr1 values : \n");
    for (iCounter = 0; iCounter < iElementCount; iCounter++)
    {
        printf("Enter arr1[%d] value :\t", iCounter);
        scanf("%d", &arr1[iCounter]);
    }

    AssignArray(arr1,arr2,iElementCount);

    printf("\narr1 values are:\n");
    for (iCounter = 0; iCounter < iElementCount; iCounter++)
    {
        printf("arr1[%d] = %d\n", iCounter, arr1[iCounter]);
    }

    printf("\narr2 values are:\n");
    for (iCounter = 0; iCounter < iElementCount; iCounter++)
    {
        printf("arr2[%d] = %d\n", iCounter, arr2[iCounter]);
    }

   return 0;

}

void AssignArray(int arr1[],int arr2[],int iElementCount)
{
 int iCounter;
    
      for (iCounter = 0; iCounter <iElementCount; iCounter++) 
      {
        arr2[iCounter] = arr1[iCounter];
      }
}
/*
Enter arr1[0] value :   10
Enter arr1[1] value :   20
Enter arr1[2] value :   30

arr1 values are:
arr1[0] = 10
arr1[1] = 20
arr1[2] = 30

arr2 values are:
arr2[0] = 10
arr2[1] = 20
arr2[2] = 30
*/