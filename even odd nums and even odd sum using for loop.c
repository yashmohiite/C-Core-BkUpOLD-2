#include<stdio.h>

int main ()

{
    int esum = 0, osum = 0, i;

    for(i = 1 ; i <= 10 ; i++)
    {
        if(i % 2 == 0)
        {
            esum = esum + i;
            printf("%d is even\n", i);
        }
        else
        {
            osum = osum + i;
            printf("%d is odd\n", i);
        }
    }

    printf("%d is even sum\n%d is odd sum\n", esum, osum);

    return 0;
}
