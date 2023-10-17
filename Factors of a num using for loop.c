#include<stdio.h>

int main ()

{
    int num, i;

    printf("Enter a num to find factors:\n");
    scanf("%d", &num);

    printf("1 and %d are factors of %d\n", num, num);

    for(i = 2 ; i <= num/2 ; i++)
    {
        if(num % i == 0)
        {
            printf("%d is a factor of %d\n", i, num);
        }
    }

    return 0;
}
