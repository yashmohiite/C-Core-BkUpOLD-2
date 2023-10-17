// If a num has No Factors it is Prime
//If a num has factor other than 1 and that Num, it is a Prime Num

// Alternate Solutn in Phone, Photo

#include<stdio.h>

int main ()

{
    int num, i = 1, temp, fcount = 0;

    printf("Enter a No. you want to check if it is a Prime or not :\n");
    scanf("%d", &num);

    temp = num;

    while (i <= num)
    {
        if(num % i == 0)
        {
            fcount ++;
        }

        i++;
    }

    if((fcount == 2) || (fcount == 1))
    {
        printf("The num %d is a Prime No.\n", temp);
    }

    else
    {
        printf("The num %d is not a Prime No.\n", temp);
    }

    return 0;
}
