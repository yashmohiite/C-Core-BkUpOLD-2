#include<stdio.h>

int main ()

{
    int base, power, result = 1, i;

    printf("Enter Base and Power to get Result:\n");
    scanf("%d%d", &base, &power);

    for(i = 1 ; i <= power ; i++)
    {
        result = result * base;
    }

    printf("%d ^ %d = %d", base, power, result);

    return 0;
}
