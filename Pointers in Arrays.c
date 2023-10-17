#include<stdio.h>
//And 2nd Part / Revision Combined
int main ()

{
    int i, arr[5] = {10, 20, 30, 40, 50};  // Note Syntax of Array
    int *ptr = &arr[0]; //Assign address of first location to ptr var
    int sum = 0;

    printf("\n%d and Address is %u", *ptr, ptr);
    printf("\n%d and Address is %u", *(ptr + 0), (ptr + 0));
    printf("\n%d and Address is %u", *(ptr + 1), (ptr + 1));
    printf("\n%d and Address is %u", *(ptr + 2), (ptr + 2));
    printf("\n%d and Address is %u", *(ptr + 3), (ptr + 3));
    printf("\n%d and Address is %u", *(ptr + 4), (ptr + 4));

    printf("\n\nOR\n\n");

    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d\n", *(ptr + i));
        sum = sum + *(ptr +i);
    }

    printf("\n\nREVERSE\n\n");

    for (i = 4 ; i >= 0 ; i--)
    {
        printf("%5d", *(ptr + i));    //'%5d' means space between 2 values
    }

    printf("\nSum is : %d\n", sum);

    return 0;
}
