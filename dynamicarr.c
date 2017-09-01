#include<stdio.h>
#include<stdlib.h>
int main()
{
  //const int v=0;
  //v=1;
  long int n;
  int *a;
  scanf("%ld",&n);
  
 //a=(int *)malloc(sizeof(int));

 //free(a);
  
  a=(int *)malloc(sizeof(int)*n);
  //a=new int[n];
  *a=5;
  
    //*a=6;
    printf("size of arr pointer %d\n",sizeof(a));
    printf("start address of array %ld",a);
  if (a==0)
		{
			abort();
		}
  free(a);
//  delete[] a;
  return 0;
}