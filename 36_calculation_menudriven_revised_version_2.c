#include <stdio.h>

int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);

int main(void) {
    int iNo1; 
    int iNo2; 
    int iAns; 
    int iChoice;

  while(1) {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
      
        printf("Enter your choice:\t ");
        scanf("%d", &iChoice);

        if (iChoice >= 1 && iChoice <= 5)
         {
           printf("Enter two numbers: ");
           scanf("%d%d", &iNo1, &iNo2);
         } 

          switch (iChoice) {
            case 1:
             iAns = Addition(iNo1, iNo2);
            break;
            case 2:
             iAns = Subtraction(iNo1, iNo2);
            break;

            case 3:
             iAns = Multiplication(iNo1, iNo2);
            break;
            case 4:
              iAns = Division(iNo1, iNo2);
            break;
            case 5:
              iAns = Modulus(iNo1, iNo2);
            break;

            case 6:
            return 0;

            default:
            printf("wrong choice\n");
            continue;

            }
            
            printf("Answer is = %d\n", iAns);
        }  

}

  int Addition(int iNo1,int iNo2)
  {
    int iAns;
    iAns=iNo1+iNo2;

  }

    int Subtraction(int iNo1,int iNo2)
  {
    int iAns;
    iAns=iNo1-iNo2;
    return iAns;
    
  }

    int Multiplication(int iNo1,int iNo2)
  {
    int iAns;
    iAns=iNo1*iNo2;
    
  }

    int Division(int iNo1,int iNo2)
  {
    int iAns;
    iAns = iNo1/iNo2;
    
  }

    int Modulus(int iNo1,int iNo2)
  {
    int iAns;
    iAns=iNo1%iNo2;
    return iAns;
  }
  /*OUTPUT*/
  /*
  1. Addition      
2. Subtraction   
3. Multiplication
4. Division      
5. Modulus       
6. Exit
Enter your choice:       3
Enter two numbers: 10 2
Answer is = 20
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice:
  */