#include<stdio.h>

int main ()

{
    int sum = 0, i, num;

    printf("Enter Number you want sum from 0 to that Num:\n");
    scanf("%d", &num);

    for (i = 1 ; i <= num ; i++)
    {
        sum = sum + i;
    }

    printf("Value of Sum is %d", sum);

    return 0;
}
