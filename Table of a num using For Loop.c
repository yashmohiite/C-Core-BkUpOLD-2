#include<stdio.h>

int main ()

{
    int i, num, mult;

    printf("Enter num for which you want your table:\n");
    scanf("%d", &num);

    printf("Enter multiplier upto which you want your table:\n");
    scanf("%d", &mult);

    for (i = 1 ; i <= mult ; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);

        //i++;              //Do not write increment or decrement unless you need, as it's already in for conditions, common mistakes
    }

    return 0;
}
