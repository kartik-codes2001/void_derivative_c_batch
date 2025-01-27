  #include<stdio.h>

  int AddSub(int iNo1,int iNo2,int*piDiff);

  int main(void)
  {

    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter Two Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);  //Enter Two Numbers : 20 10

    iSum = AddSub(iNo1,iNo2,&iDiff);

    printf("Addition is : %d\n",iSum);  //Addition is : 30
    printf("Subtraction is : %d\n",iDiff);  //Subtraction is : 10

    return 0;
  }

  int AddSub(int iNo1,int iNo2,int*piDiff)
  {

   *piDiff = iNo1 - iNo2;

   return iNo1+iNo2;

}