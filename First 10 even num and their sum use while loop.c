#include<stdio.h>

int main ()

{
    int i = 0, j = 1, sum = 0;

    while (j <= 10)
    {
        i = i + 2;
        printf("%d\n", i);

        sum = sum + i;

        j++;
    }

    printf("Sum = %d", sum);

    return 0;
}
