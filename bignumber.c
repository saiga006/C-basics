#include<stdio.h>
int main()
{
  int val1,val2;
  printf("enter the first number");
  scanf("%d",&val1);
  printf("enter the second number");
  scanf("%d",&val2);
  //checks for the larger number
  if (val1>val2)
    printf("Number 1 is larger than Number 2\n");
  else
    printf("Number 2 is larger than Number 1\n");
 // printf("size of val1:%d",sizeof(val1));
  return 0;
  
}