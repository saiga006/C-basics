#include<stdio.h>
//#include<conio.h> dooesnt work in this compiler it is compiler specific
int main()
{
    int n;
    //int &V=n;
    //reference variable cant be used in c
    //variable name can begin only with alphabets and special characters like _,*
  printf("Hello world");//call to inbuilt library fn in stdio(standard input & output) header file
  //getch(); works only if conio header supports -halts the execution window till any key is pressed
  scanf("%d",&n);//stores an integer datatype in an integer type variable and &n indicates the address of the variable where the data has to be stored
  // note different datatypes doesnt hold different data and doesnt display different data if format specifier mentioned in printf or scanf statement is not appropriate to the variable declared
  printf("LOL %d",n);// SEMICOLON USED FOR TERMINATION OF EACH statement IN C 
  //printf fn prints the value of variable n (integer type- specified by format specifier %d) along with LOL string
  
}
