#include<stdio.h>

int main ()

{
    int i, num, count = 0, temp;

    printf("Enter a num : \n");
    scanf("%d", &num);

    temp = num;

    while(num > 0)
    {
        num = num / 10;

        count++;
    }

    printf("The No. of digits are %d in Num %d\n", count, temp);

    return 0;
}
