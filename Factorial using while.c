#include<stdio.h>

int main ()

{
    int i = 1, fac = 1, num;

    printf("Enter num which you want to calculate Factorial : \n");
    scanf ("%d", &num);

    while(i <= num)
    {
        fac = fac * i;

        i++;
    }

    printf("Factorial = %d", fac);

    return 0;
}
