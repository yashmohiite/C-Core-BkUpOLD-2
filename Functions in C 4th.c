#include<stdio.h>

// With Arguments and With Return

int add (int , int);

int main ()
{
    int n1, n2, a;

    printf("Enter 2 Nos.\n");
    scanf("%d%d", &n1, &n2);

    a = add(n1 , n2);

    printf("Add is %d\n", a);

    return 0;
}

int add(int a , int b)
{
    int sum;

    sum = a + b;

    return sum;
}
