#include<stdio.h>

int main ()

{
    int i = 1, sum = 0, num;

    printf("Enter num upto which you want summation: \n");
    scanf ("%d", &num);

    while (i <= num)
    {
        sum = sum + i;

        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
