//3rd Nov 2022

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p, ch, sum = 0, cnt = 0;

    do
    {
        cnt++;
        p=(int*)malloc(sizeof(int)); //Type Casting, can run without writing it also
        printf("Enter Value\n");
        scanf("%d", p);

        sum=sum+*p;

        printf("\nDo you want to add more objects press 1\n");
        scanf("%d", &ch);
    }while(ch==1);

    printf("\nSum of %d no. is %d", cnt, sum);

    return 0;
}
