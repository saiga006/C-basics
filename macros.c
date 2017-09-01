#include<stdio.h>
#define val 25

void func_val(void)
{
  printf("%d",val);
  
  
}
int main()
{ int i=13,*j;
  #define val 2
  printf("%X\t",i);//prints "cap" HEX format
  printf("%x\t",i);//prints "lowercase" HEX format
  {
    int i=6;
    j=&i;
  }
  printf("%d\t",*j);//the local variable i=6 is accessed here indirectly using pointer,normally the scope of the variable is within the block in which it is defined,we cannot reference it by its name outside the block,but it can be accessed using a pointer to that variable. 
  printf("%p\t",main);//prints the address of the main function
  printf("%d\t",val);// prints local defined macro
  printf(3+"saigalee\t");//skips 3 characters and prints
  func_val();
    return 0;
}
// prints the val as 25 if we define the function before main
// prints the val as 2 if we define the function below main 
// local define macro overides the global macro
//but in the 1st case where the func defined above main ,before the compilation the function val is replaced by global val and not by local val since it compiles line by line.
