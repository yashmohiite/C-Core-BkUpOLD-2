#include<stdio.h>

int main ()

{
    int n1, n2, n3;

    printf("Enter 3 Nos. to find largest:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if((n1>n2)&&(n1>n3))
    {
        printf("%d Greater than %d and %d\n", n1, n2, n3);
    }

    else if((n2>n1)&&(n2>n3))
    {
        printf("%d Greater than %d and %d\n", n2, n1, n3);
    }

    else if((n3>n1)&&(n3>n2))
    {
        printf("%d Greater than %d and %d\n", n3, n1, n2);
    }
    else
    {
        printf("%d, %d, %d all Nos. are same\n", n1, n2, n3);
    }

    return 0;
}
