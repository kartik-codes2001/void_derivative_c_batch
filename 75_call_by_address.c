  #include<stdio.h>

  void Fun(int*pPtr);

  int main(void)
  {

    int iNo = 10;

    printf("Before  calling fun : %d\n",iNo);  //10

    Fun(&iNo);

    printf("After  calling fun : %d\n",iNo);   //11

    return 0;
  }

  void Fun(int *pPtr)
  {
    printf("In fun : %d\n",*pPtr);   //10

    (*pPtr)++;

    printf("Leaving fun : %d\n",*pPtr);   //11

}

/*OUTPUT*/
/*
Before  calling fun : 10
In fun : 10
Leaving fun : 11
After  calling fun : 11
*/