#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\nReverse:\n\n");

    for(i=5 ; i>=1 ; i--)
    {
        for(j=1 ; j<=i ; j++)   //Note this Condition
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
