  #include<stdio.h>

  void AddSub(int*pPtr1,int*pPtr2);

  int main(void)
  {

    int iNo1;
    int iNo2;

    printf("Enter Two Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);  //Enter Two Numbers : 20 10
    AddSub(&iNo1,&iNo2);

    printf("Addition is : %d\n",iNo1);  //Addition is : 30
    printf("Subtraction is : %d\n",iNo2);  //Subtraction is : 20

    return 0;
  }

  void AddSub(int*pPtr1,int*pPtr2)
  {

    int iTemp;
    iTemp = *pPtr1;

    *pPtr1 = *pPtr1 + *pPtr2;
    *pPtr2 = *pPtr1 - *pPtr2;
  }