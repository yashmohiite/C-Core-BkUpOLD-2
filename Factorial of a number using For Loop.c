#include<stdio.h>

int main()

{
    int num, i, fact = 1, temp;

    printf("Enter Num for which you want to find Factorial:\n");
    scanf("%d", &num);

    temp = num;

    for(i = num ; i >= 1 ; i--)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %d", temp, fact);

    return 0;
}
