#include<stdio.h>

int main ()

{
    int i = 10, num1;

    printf("Enter no. of which you want to print table in Reverse from multiplier 10: \n");
    scanf("%d", &num1);

    while (i > 0)
    {
        printf("%d * %d = %d \n", num1, i, num1 * i);

        i--;
    }

    return 0;
}
