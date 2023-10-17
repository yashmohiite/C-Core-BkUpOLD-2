#include<stdio.h>

int main ()

{
    int num, i, factor;

    printf("Enter a num to check if Prime\n");
    scanf("%d", &num);

    for(i = 2 ; i <= num/2 ; i++)       //Does not work for 1 and 3
    {
        if(num % i == 0)
        {
            printf("%d is not Prime\n", num);
            break;
        }
        else
        {
            printf("%d is Prime\n", num);
            break;
        }
    }

    return 0;
}
