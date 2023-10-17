#include<stdio.h>

int main ()

{
    int ch;

    printf("Enter choice of day: \n");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Monday\n");
    }

    else if (ch == 2)
    {
        printf("Tuesday\n");
    }

    else if (ch == 3)
    {
        printf("Wednesday\n");
    }

    else if (ch == 4)
    {
        printf("Thursday\n");
    }

    else if (ch == 5)
    {
        printf("Friday\n");
    }

    else if (ch == 6)
    {
        printf("Saturday\n");
    }

    else if (ch == 7)
    {
        printf("Sunday\n");
    }

    else
        printf("Invalid\n");

    return 0;
}
