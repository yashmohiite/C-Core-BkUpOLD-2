#include<stdio.h>

//with arguments and without return type

void add(int , int);

int main ()
{
    int n1, n2;

    printf("Enter any 2 Nos.");
    scanf("%d%d", &n1, &n2);

    add(n1 , n2);

    return 0;
}

void add(int a , int b)
{
    int add1;
    add1 = a + b;

    printf("\nAddition is : %d", add1);
}
