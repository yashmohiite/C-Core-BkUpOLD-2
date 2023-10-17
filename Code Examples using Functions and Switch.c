#include<stdio.h>

void factors();
void factorial(int);


int main ()

{
    int ch;
    int num1;
    printf("1 - Factors\n2 - Factorial\n3 - Prime\n4 - Fibonacci\n5 - Reverse\n6 - Power\n7 - Pallindrome\n8 - Neon\n9 - Armstrong\n10 - Exit\n");
    printf("Enter your Choice:\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        factors();

        break;

    case 2:


        printf("Enter Num to find its Factorial:\n");
        scanf("%d", &num1);
        factorial(num1);

        break;

    default:

        printf("Error, Check your Choice Entered\n");

        break;
    }

    return 0;
}

void factors()
{
    int num2, factors, i;
    printf("Enter the Number you want to find Factors of:\n");
    scanf("%d", &num2);

    for (i = 2 ; i <= num2/2 ; i++)
    {
        factors = num2 % i;

        if(factors == 0)
        {
            printf("Factors of %d is %d\n", num2, i);
        }
    }
}

void factorial(int n)   //Check Again
{
    int j, factorial = 1;

    for(j = 1 ; j <= n ; j++)
    {
        factorial = factorial * j;
    }

    printf("Factorial of %d is %d", n, factorial);
}
