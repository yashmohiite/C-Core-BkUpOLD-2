#include<stdio.h>

int main ()

{
    int i, num, j, num2;

    printf("Enter a Number till you want to print from 0:\n");
    scanf("%d", &num);

    for(i = 0 ; i <= num ; i++)
    {
        printf("\n%d", i);
    }

    printf("\nEnter Number from which you want to print till 0:\n");
    scanf("%d", &num2);

    for(j = num2 ; j >= 0 ; j--)
    {
        printf("\n%d", j);
    }

    return 0;
}
