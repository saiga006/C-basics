#include<stdio.h>
int main()
{
  
enum saiga {lee,firefrost,revamped};
enum saiga mukund=1;
mukund =revamped;//this is allowed
//lee=3;//but this is not allowed
int i;
i=revamped;
printf("enum tym %d",mukund);



return 0;
}