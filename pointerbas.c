/* basic pointer program - pointer is a variable that indirectly address a variable of appropriate type(reference a variable) depending defined by the created pointer type  */
#include<stdio.h>
int main()
{
  int b=20;
  int *p;//pointer to an integer datatype
 
 // printf("%d\n",*p);
  printf("%d\n",p);//prints the address in p
  printf("%d\n",&b);//prints the address of b
   p=&b;//making p to point b
  printf("%d\n",p);//prints the address pointed by p
  printf("%d\n",*p);//dereference the value pointed by p
  //*p++;
  printf("%d\n",p++);// performs pointer arithmetic - increments the address pointed by p by 4 bytes since the size of int type is 4 bytes
  printf("%d\n",p);// prints the incremented address after postfix statement
  printf("size of int var :%d\n",sizeof(b));//returns the size of int variable
  printf("size of pointer var:%d",sizeof(p));// returns the size of pointer variable depending upon the architecture use dby the system
  return 0;
}
