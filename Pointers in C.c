#include<stdio.h>

// Definition : Pointer is a Variable which is Used To Store Address of Another Variable

// To store Address of Integer Variable we need Integer Pointer

// To store the address of float variable we need float pointer

/*
Examples :

int n1 = 10;
int *ptr = &n1;

float a = 10.10;
float *p = &a;

char ch = 'A';
char *ptr = &ch;

*/

int main ()

{
    /*
    int n = 10;

    printf("n = %d\n", n);

    printf("\nAddress of Memory Location which is assigned to value 10 is : %u\n", &n);  // %u means Unsigned Variable/Address
    */

    int n1;
    int *ptr;
    n1 = 10;
    ptr = &n1;

    printf("\nValue of n1 is : %d", n1);    //10
    printf("\nAddress of n1 is: %u", &n1);  //1000

    printf("\n\nValue of n1 using Pointer is : %d", *ptr);  //10
    printf("\nAddress of n1 using Pointer is : %u", ptr);   //1000

    printf("\n\nAddress of Pointer itself is : %u", &ptr);  //1000

    return 0;
}
