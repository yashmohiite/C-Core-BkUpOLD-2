#include<stdio.h>

// Factors of a Num Appear up to Half of its Num, Example = Num = 88, Factors will be from 1 to 44

// Also 1 and that Num itself are factors, so start from 2

int main ()

{
    int i, num;

    printf("Enter Num you want to find factors of : \n");
    scanf("%d", &num);

    i = 2;

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            printf("%d is Factor \n", i);
        }

        i++;
    }

    return 0;
}
