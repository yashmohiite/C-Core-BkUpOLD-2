//  Incomplete

#include<stdio.h>

int main ()

{
    int num, i, count = 0, temp;

    printf("Enter a Num to count digits in it\n");
    scanf("%d", &num);

    temp = num;

    for(i = num ; i >= 0 ; i = i / 10)
    {
        count++;
    }

    printf("%d digits in %d", count, temp);

    return 0;
}
