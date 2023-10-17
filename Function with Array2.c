#include<stdio.h>
#include<stdlib.h>

int display (int [] , int);

#define max 20

int main()
{
    int arr[20], n, i;

    printf("How many Elements you want to Enter in Array?\n");
    scanf("%d", &n);

    printf("\nEnter numbers in Array");

    for (i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nSum of %d Nmbers is : %d", n , display(arr , n));

    return 0;
}

int display(int arr[] , int n)
{
    int i, sum = 0;

    for(i = 0 ; i < n ; i++)
    {
        sum = sum + arr[i];

        printf("\n%5d", arr[i]);
    }

    return sum;
}
