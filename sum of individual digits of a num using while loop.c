#include<stdio.h>
int main ()

{
    int num, remainder, sum = 0;

    printf("Enter your num you want to find sum of its digits : \n");
    scanf("%d", &num);

    while(num > 0)
    {
        remainder = num % 10;
        printf("Remainder : %d\n", remainder);
        sum = sum + remainder;
        num  = num / 10;
    }

    printf("Sum of digits of a num : %d", sum);

    return 0;
}
