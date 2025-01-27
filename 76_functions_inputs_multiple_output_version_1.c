  #include<stdio.h>

  void AddSub(int iNo1,int iNo2,int*piSum,int*piDiff);

  int main(void)
  {

    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter Two Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);  //Enter Two Numbers : 20 10

   AddSub(iNo1,iNo2,&iSum,&iDiff);

    printf("Addition is : %d\n",iSum);  //Addition is : 30
    printf("Subtraction is : %d\n",iDiff);  //Subtraction is : 10

    return 0;
  }

  void AddSub(int iNo1,int iNo2,int*piSum,int*piDiff)
  {

   *piSum = iNo1+iNo2;
   *piDiff = iNo1 - iNo2;

}