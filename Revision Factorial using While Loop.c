#include <stdio.h>

int main ()

{
    int fac = 1, i = 1, num;

    printf ("Enter a num : \n");
    scanf ("%d", &num);

    while (i <= num)
    {
        fac = fac * i;
        i++;
    }

    printf("Factorial = %d", fac);

    return 0;
}
