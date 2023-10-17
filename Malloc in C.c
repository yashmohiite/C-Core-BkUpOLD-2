#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int ch;
    int *p, sum = 0, avg, count = 0, small = 0, big = 0;

    do
    {
        p = malloc(sizeof(int));    //4 bytes Node data = new Node();       //Another Syntax :n = (int*)malloc(sizeof(int));
        printf("\nEnter Any No.\n");
        scanf("%d", p); //10    20  30  40  50          //No need to give & to pointer as its already reffering to address.
        sum = sum + *p;

        printf("\nYour No is : %d\n", *p);
        count++;
        printf("\nDo you want to continue, press 1 else press any other");
        scanf("%d", &ch);
    }while(ch == 1);

    printf("\nSum of n numbers is : %d", sum);

    avg = sum / count;

    printf("\nAverage = %d", avg);

    return 0;
}
