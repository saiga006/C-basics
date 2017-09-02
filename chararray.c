#include<stdio.h>
void prnt(char*);
int main()
{
 char sai[]="MITindia";//\0 is implicit
// char smk[3]="saio";//this statement exceeds size of array-error
 //char array must always be terminated by \0 character
 char smk1[]="sai";//allocates space based on length
 char smk2[]={'s','a','i','\0'};//null termination must be explicit
 char rhino[4];
 rhino[1]='s';
 rhino[2]='a';
 rhino[3]='i';
 rhino[0]='6';
 //printf("%s\n",smk);//throws error
 printf("%s\n",sai);
 printf("%s\n",smk1);
 printf("%s\n",smk2);
 printf("%s\n",rhino);//this prints garbage value-no null termination
char* ptr;
ptr=smk2;//assigns address of array to the char pointer
printf ("\n%c",ptr[2]);//prints the value of i and this statement is similar to *(ptr+2) or smk2[2] or *(smk2+2)
//smk2=ptr;//
//smk2=smk2+1;// the above statement and this one is invalid
ptr++;//this is valid since ptr is a pointer but smk2 is not a pointer but it is a char array.
//arrays are always passed to function as reference and not by value
//arrays are large in size thus we dont overflow the stack by creating duplicate copies of same array
prnt(ptr);
char *erb="hello";//stores it as constant literal (string constant) and cannot be modified.
erb[2]="E"//this is not possible as erb points to string constant stored in text section of mem.
  return 0;
}
void prnt(char* chr) // void prnt (const char* chr) makes the pointer a readable one and whose value cannot be modified once assigned
{
int i=0;
//chr[2]='T' this gives error if the func. accepts constant char pointer as argument
 while(*(chr+i)!=0)
 {
   printf("\nhello :%c\n",*(chr+i));
   i++;
 }
}
  
  
  