#include<stdio.h>
#include<stdlib.h>
//Tables Code
int main ()
{
    int i, j, ans;

    for(i=1 ; i<=10 ; i++)
    {
        for(j=1 ; j<=10 ; j++)
        {
            printf("%5d", i*j);
        }

        printf("\n\n");
    }

    return 0;
}
