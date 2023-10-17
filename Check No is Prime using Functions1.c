#include<stdio.h>
//Try other 3 Remaining Types of Functions using this Example
void prime1();

int main ()

{
    prime1();

    return 0;
}

void prime1()
{
    int num, i;

    printf("Enter Num to check if it's Prime : \n");
    scanf("%d", &num);

    for (i = 2 ; i <= num/2 ; i++)
    {
        if (num % i == 0)
        {
            printf("%d is Not a Prime No.\n", num);
            break;
        }

        else
            printf("%d is a Prime No.\n", num);
            break;
    }
}
