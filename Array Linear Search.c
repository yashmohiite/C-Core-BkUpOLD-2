#include<stdio.h>
#include<stdlib.h>

#define max 20

int main ()

{
    int arr[max];
    int n, i;
    int search;
    int flag = 0;

    printf("How many elements do you want in array?\n");
    scanf("%d", &n);

    printf("Enter any %d Numbers in Array\n", n);

    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Number to Search in Array:\n");
    scanf("%d", &search);

    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == search)
        {
            flag = 1;
        }
    }

    if (flag)
    {
        printf("Element Found\n");
    }

    else
    {
        printf("Element Not Found");
    }

    return 0;
}
