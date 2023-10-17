#include<stdio.h>

// Without Arguments and With Return Type

int add();

int main ()
{
    int s;

    s = add();

    printf("\nAdd is : %d", s);

    return 0;
}

int add()
{
    int n1, n2;
    int sum;

    printf("Enter any 2 Nos.\n");
    scanf("%d%d", &n1, &n2);

    sum = n1 + n2;

    return sum;
}
