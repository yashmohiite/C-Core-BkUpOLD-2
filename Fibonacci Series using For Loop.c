//1 1 2 3 5 8 13 21 34 55   //Print 10 Terms

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k, c;

    i=1;
    j=1;

    printf("%d\t%d\t", i, j); //1, 1

    for(c=1 ; c<=8 ; c++) //c=5
    {
        k=i+j; //k=5+8=13

        printf("%d\t", k); //2 3 5 8 13

        i=j;
        j=k;
    }

    printf("\n");

    return 0;
}
