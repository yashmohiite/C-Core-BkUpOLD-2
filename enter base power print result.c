#include<stdio.h>

int main ()

{
    int num, pow, res = 1, i = 1;

    printf("Enter Num: \n");
    scanf ("%d", &num);

    printf("Enter Power: \n");
    scanf("%d", &pow);

    while (i <= pow)
    {
        res = res * num;
        i++;
    }

    printf("Result = %d\n", res);

    return 0;
}
