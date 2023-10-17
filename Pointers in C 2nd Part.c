#include<stdio.h>

int main ()

{
    int n1;
    int *ptr = &n1; //Address of n1 we can store in ptr variable which is pointer variable of int type

    n1 = 10;

    printf("\nValue of n1 is : %d\n", n1); //n1 = 10
    printf("\nAddress of n1 is : %u\n", &n1); //1000

    printf("\n-----------------------------------------------------------\n");

    printf("\nValue of n1 using Pointer is : %d\n", *ptr); //n1 = 10
    printf("\nAddress of n1 is : %u\n", ptr); //1000

    printf("\nAddress of ptr variable is : %u\n", &ptr); //%u means unsigned int, only +ve, as address can't be negative

    return 0;
}
