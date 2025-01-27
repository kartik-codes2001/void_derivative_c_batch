#include <stdio.h>
#define MAX 10
#define EQUAL 1
#define NOT_EQUAL 0

int CompareArrays(int arr1[], int arr2[], int iElementCount);

int main(void)
{
    int iResult;
    int iCounter;
    int iElementCount1;
    int iElementCount2;

    int arr1[MAX];
    int arr2[MAX];

    printf("How many elements you want to enter in arr1?(<%d) :\t", MAX);
    scanf("%d", &iElementCount1);

    printf("How many elements you want to enter in arr2?(<%d) :\t", MAX);
    scanf("%d", &iElementCount2);

    if (iElementCount1 != iElementCount2)
    {
        printf("Array values will be not Same\n");
        return 0;
    }

    printf("\nEnter arr1 values : \n");
    for (iCounter = 0; iCounter < iElementCount1; iCounter++)
    {
        printf("Enter arr1[%d] value :\t", iCounter);
        scanf("%d", &arr1[iCounter]);
    }

    printf("\nEnter arr2 values : \n");
    for (iCounter = 0; iCounter < iElementCount2; iCounter++)
    {
        printf("Enter arr2[%d] value :\t", iCounter);
        scanf("%d", &arr2[iCounter]);
    }

    printf("\narr1 values are:\n");
    for (iCounter = 0; iCounter < iElementCount1; iCounter++)
    {
        printf("arr1[%d] = %d\n", iCounter, arr1[iCounter]);
    }

    printf("\narr2 values are:\n");
    for (iCounter = 0; iCounter < iElementCount2; iCounter++)
    {
        printf("arr2[%d] = %d\n", iCounter, arr2[iCounter]);
    }

    iResult = CompareArrays(arr1, arr2, iElementCount1);
    if (EQUAL == iResult)
        printf("Arrays are Equal\n");
    else
        printf("Arrays are not Equal\n");

    return 0;  
}

int CompareArrays(int arr1[], int arr2[], int iElementCount)
{
    for (int i = 0; i < iElementCount; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return NOT_EQUAL;
        }
    }
    return EQUAL;
}
/*
How many elements you want to enter in arr1?(<10) :     4
How many elements you want to enter in arr2?(<10) :     4
Enter arr1 values : 
Enter arr1[0] value :   10
Enter arr1[1] value :   20
Enter arr1[2] value :   30
Enter arr1[3] value :   40

Enter arr2 values : 
Enter arr2[0] value :   30
Enter arr2[1] value :   40
Enter arr2[2] value :   60
Enter arr2[3] value :   70

arr1 values are:
arr1[0] = 10
arr1[1] = 20
arr1[2] = 30
arr1[3] = 40

arr2 values are:
arr2[0] = 30
arr2[1] = 40
arr2[2] = 60
arr2[3] = 70

Arrays are not Equal

*/