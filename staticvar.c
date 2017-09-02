#include <stdio.h>
int value_func(int);
static int val2_func(int* );
int main()
{ 
  static int z;
  int v,t,s[5];
  s[1]=2;
  2[s]=3;//array can be initialized in this way also
  s[3]=4;
  //since index 0 and index 4 is not assigned any values,there exists a garbage values
  for(v=0;v<(sizeof(s)/sizeof(int));v++)
  printf("%d\t",*(s+v));//printing by accessing array index like pointers accessed
  //value of v after loop run
  printf("\n%d\n",v);
  v=10;
  printf("%d\n",v);
  v=value_func(v);//call to a function
  printf("value after first call\n");
  printf("%d\n",v);
  v=value_func(v);
  printf("incremented value after second call\n");
  printf("%d\n",v);//incremented value after second call
 // z=18;//this gives wrong value
 z=v;
//  printf("printing static var %d\n",z);//use of printf before call of val2_func causes change in static var value 
  //z=z+18 or z=v works fine
  
 // t=val2_func(&v);//returns sum garbage value
  t=val2_func(&z);// this statement returns value of static variable if the static variable was assigned in this way   //z=z+18 or z=v works fine
 // t=val2_func(z);//if the argument is passed as variable,it works fine only if the function accepts the argument as a variable and not as a int pointer
  printf("after a call to val2 func\n");
  printf("%d",t);
  return 0;
  
}
int value_func(int val)
{
  static int lue;
  printf("initial value of lue at each call \n");
  printf("%d\n",lue);//initial value of lue at each call
  lue=val+lue;//assignment of value to static variable lue
  return lue;
}
static int val2_func(int* val)
{
  int b;
  
  // this function retuns the value which is passed to it as argument
  return ;
}