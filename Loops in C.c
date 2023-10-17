#include<stdio.h>

int main ()

// While Loop

{
    int i = 0, num;

    int j, num2;

    printf("Enter No. till you want to print from 0: \n");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i);

        i++;
    }

    printf("Enter No. from which you will print to 0: \n");
    scanf("%d", &num2);

    j = num2;

    while(j >= 0)
    {
        printf("%d\n", j);
        j--;
    }

    return 0;
}
