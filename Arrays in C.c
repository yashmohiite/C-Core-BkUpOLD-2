// Array is a Collection of Similar Data Type Allocating memory continuosly and defined by using a Common Name. Each element of an array is accessed by using
//Index or Sub Script Number, an Index starts from '0'

#include<stdio.h>

int main ()

{
    int arr[5], i;

    printf("Enter any 5 numbers in Array:\n");

    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in Array are :\n");

    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\nElements in Reverse Order are :\n");

    for (i = 4 ; i >= 0 ; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
