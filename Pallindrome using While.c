#include<stdio.h>

int main ()

{
    int revnum, num, temp, rem;

    printf("Enter num to check if Pallindrome : \n");
    scanf("%d", &num);

    temp = num;

    while(num > 0)
    {
        rem = num % 10;

        revnum = revnum * 10 + rem;

        num = num / 10;
    }

    if (revnum == temp)
    {
        printf("The No. is Pallindrome \n");
    }

    else
    {
        printf("No. is not Pallindrome \n");
    }

    return 0;
}
