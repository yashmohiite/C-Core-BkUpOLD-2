//Count total No. of Even and Odd Numbers in an array
#include<stdio.h>

int main ()

{
    int arr[5], i;
    int even = 0, odd = 0;

    printf("Enter Array Elements:\n");

    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Array Elements are :\n");
    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Even Elements are = %d\n\nOdd Elements are = %d\n", even, odd);

    return 0;
}
