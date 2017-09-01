#include<stdio.h>
#include<stdlib.h>
int Add(int a,int b) //Called function-formal arguments
{
  printf("address of a in add=%d\n",&a);
  int c=a+b;
  return c;
}
int* Add2(int* a,int* b) //Called function
{
  printf("address of a in add=%d\n",&a);
  printf("value in a of Add(address of a of main)=%d\n",a);
  printf("value at address stored in a of add =%d\n",*a);
  
  
  int c=(*a)+(*b);
  //return c;
  return &c;
}
int* Add3(int* a,int* b) //Called function
{
  printf("address of a in add=%d\n",&a);
  printf("value in a of Add(address of a of main)=%d\n",a);
  printf("value at address stored in a of add =%d\n",*a);
  
  int*c=(int *)malloc(sizeof(int));//dynamic alloc
  *c=(*a)+(*b);
  //return c;
  return c;
}
int main()
{
  int a=2,b=4;
  printf("address of a in main=%d \n",&a);
  //call by value
  int c=Add(a,b);//value of a,b of main(actual arguments) is copied to  a,b of add fn()
  //int d=Add2(&a,&b)
  int* k=Add2(&a,&b);//this fails because this returns a pointer to a variable in stack which is already deallocated
  int* l=Add3(&a,&b);//this works because it creates a space in heap section of app mem. and it returns pointer to that location which has to be explicitly deallocated
  
//  printf("helloworld\n");
  printf("value in k %d\n",k);
  printf("helloworld\n");
  printf("value in l %d\n",*l);
  printf("Sum= %d\n",c);
  free(l);
}