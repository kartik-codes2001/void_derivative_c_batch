#include<stdio.h>

int main(void)
{

  int arr[] = {10,20,30,40,50};

  int *pPtr1 = &arr[0];
  int *pPtr2 = &arr[4];

 // printf("%d\n",pPtr1 * pPtr2); //invalid operands to binary * (have 'int *' and 'int *') printf("%d\n",pPtr1 * pPtr2);
 // printf("%d\n",pPtr * 3);      //pPtr' undeclared (first use in this function) printf("%d\n",pPtr * 3);

 // printf("%d\n",pPtr1 / pPtr2); //invalid operands to binary / (have 'int *' and 'int *') printf("%d\n",pPtr1 / pPtr2)
 // printf("%d\n",pPtr / 3);     //pPtr' undeclared (first use in this function) printf("%d\n",pPtr * 3);

 // printf("%d\n",pPtr1 % pPtr2); //error: invalid operands to binary % (have 'int *' and 'int') printf("%d\n",pPtr1 % 2);
 // printf("%d\n",pPtr % 2);     //pPtr' undeclared (first use in this function) printf("%d\n",pPtr * 3);
  
 return 0;
}