#include<stdio.h>
int main()
{
    int mat[3][4];
    int i,j;
    printf("\nEnter elements in Array:\n");

    for(i=0; i<3 ; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("--------MATRIX--------\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
