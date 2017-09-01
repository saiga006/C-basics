#include<stdio.h>
int z;//global var
int main()
{
  int i,u,v ;
	 const char *vi="alibaba";
 // vi[2]='M'; //check if this works
  printf("%s",vi);
  i=printf("tell the output\n");
  v=printf ("%d\n",i);
  u=printf("%d",v);

  printf("%d",z);
  return 0;
}