#include<stdio.h>
int main()
{
  int a=1025;
  int *p;
  p=&a;
  printf("size of integer is %d bytes\n",sizeof(int));
  printf("Address =%d, value =%d\n",p,*p);
  printf("address =%d,value=%d \n",p+1,*(p+1));//increse address by 4 since it is int pointer 
//  memory format of int variable a 1025 =00000000 00000000 00000100 00000001
  char *po;
  po=(char*)p;//pointer typecasting converting int pointer to float pointer 
  //both occupy same amount of bytes but the way in which data gets accessed is different 
  // now since typecasted the pointer variable dereference only one byte of memory as it is now a char pointer
  //type of pointer instructs how to dereference and access the data
  
  printf("size of char is %d bytes\n",sizeof(char));
  printf("Address =%d,value =%d\n",po,*po);
  //value 1 is printed
  //next byte gets dereferenced 
  //value 4 is printed
  printf("Address =%d,value =%d\n",(po+1),*(po+1));//pointer arithmetic increases address by one since it is char pointer
  //void pointer - generic pointer
  //can point to any variable type ,pointer dereferencing and pointer arithmetic is not possible on them
  void *p1;
  p1=p;//integer pointer value is assigned
  printf("address =%d can hold only address",p1);
  return 0;
  
  
  
}