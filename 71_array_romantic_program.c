#include<stdio.h>

int main(void)
{

  int arr[] = {10,20,30,40,50};

  printf("First printf is :%d\n",&arr); //6422284(base address)   100 (100 to 120)

  printf("second printf is :%d\n",arr); //6422284                 100 (100 to 104)

  printf("Third printf is :%d\n",&arr+1); //6422304               120

  printf("Fourth printf is :%d\n",arr+1); //6422288               104

  printf("Fifth printf is :%d\n",arr[2]); //30                    30

  printf("Sixth printf is :%d\n",arr[2]+1); //31                  31

  printf("Seventh printf is :%d\n",arr+3); //6422296              112

  // printf("%d",++arr);//error L-value is required

  // printf("%d",arr++);//error L-value is required

return 0;
}