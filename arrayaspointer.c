#include<stdio.h>
int SumOfElements(int A[],int size) // int A[] or int* A (implicit conversion by compiler)
{
    int i,sum=0;
  /*  int size= sizeof(A)/sizeof(A[0]);
    printf("size of Array var(local to the function ):%d\n",sizeof(A));
    printf("size of individual element in the array %d\n",sizeof(A[0]));
    printf("size of the array/size of individual element in the array :%d\n",size);
    //these lines are commented since we receive the address of the array ,the changes we make here affect the original array 
    //thus sizeof returns the pointer variable size and not the actual array size ,thus we need to perform the calculation in the base calling function and pass it as call by value to this function
  */
    for(i=0;i<size;i++)
    {
      sum+=A[i];//computes the sum of the array
    }
    return sum;
}
int main()
{
  int A[]={1,2,3,4,5};
  int sizeit;
  printf("size of array in main func :%d\n",sizeof(A));
   printf("size of individual element in array :%d\n",sizeof(*A));
  sizeit=sizeof(A)/sizeof(*(A+1));
  printf("No of elements in the array :%d\n",sizeit);
  int total= SumOfElements(A,sizeit);// here A holds the base address of the array SumOfElements(A)== SumOfElements(&A[0])
  //A[0]==*(A+i)==*(&A[0])
  //here calling funcion "main" passes the actual argument A as0 call by reference method where it is implicitly received by a pointed variable(formal parameter) as address since we pass name of the array (base address) but not the entire Array.
  printf("Sum of elements=%d \n",total);
  return 0;
}
// if we define the function down we need to declare the function up with the function prototype as int SumOfElements(int[],int)/(int*,int)
//arrays and pointers are different types but behave similarly
//arrays base address cannot be incremented by pointer arithmetic but they can be accessed as pointers
//arrays base address can be assigned to pointer variable directly by using the name of array but vice versa it is not possible
/* int*p;
  p=A; //possible
  A=p;//not possible
   p++;  // possible
   A++; // not possible
   (p+i)==&A[i]
   *(p+i)==A[i]
   */