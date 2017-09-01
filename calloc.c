#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int *vm=(int *)malloc(3*sizeof(int));
  for (int i=0;i<3;i++)
  scanf("%d",(vm+i));
  //#############################
  printf("im printing\n");
  for (int i=0;i<3;i++)
  printf("%d\n",*(vm+i));
  //#############################
  //check if the address of allocated and newly allocated are same
  vm=(int *)realloc(vm,8);
  printf("reallocated vals\n");
  for (int i=0;i<8;i++)
  printf("%d\n",*(vm+i));
  vm=(int *)realloc(vm,2);
  //##############################
  printf("reallocated vals2\n");
  for (int i=0;i<8;i++)
  printf("%d\n",*(vm+i));
  //#############################
  int *vf=(int *)calloc(4,sizeof(int));
  printf("value in first index :%d\n",*(vf+1));//initialized with zeroes
  for (int i=0;i<4;i++)
  printf("%d\n",*(vf+i));
  //###############################
  vf=(int *)realloc(vf,8);
  for (int i=0;i<4;i++)
  printf("%d\n",*(vf+i));
  //##############################
  vm=(int *)realloc(NULL,9);
  //##############################
  vm=(int *)realloc(vm,0);
  return 0;
}