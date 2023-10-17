#include <stdio.h>

int main ()
{
    int fac = 1, i = 2, num;

    printf("Enter num you want to print factors of : \n");
    scanf("%d", &num);

    while (i <= num/2)
    {
        if ((num % i) == 0)
        {
            printf("Factor is : %d\n", i);
        }
        i++;
    }

    return 0;
}
