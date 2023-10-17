//Infinite Loop

#include<stdio.h>

int main ()

{
    int num, i, temp, rem;

    printf("Enter num to get reverse\n");
    scanf("%d", &num);

    temp = num;

    for(i = num ; i >= 0 ; i = num / 10)
    {
        rem = i % 10;
        printf("%d", rem);
    }

    return 0;
}
