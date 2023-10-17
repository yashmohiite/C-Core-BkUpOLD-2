#include<stdio.h>

int main ()

{
    int n1, n2;

    printf("Enter 2 nos. to check greater or smaller or same\n");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2)
    {
        printf("%d Greater than %d\n", n1, n2);
    }
    else if(n1 < n2)
    {
        printf("%d Greater than %d\n", n2, n1);
    }
    else
    {
        printf("%d and %d are same\n", n1, n2);
    }

    return 0;
}
