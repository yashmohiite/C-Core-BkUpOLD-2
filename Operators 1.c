#include<stdio.h>

int main ()

{
    int x = 10, y = 20;

    printf("\n\t%d", (x > y));  // Note, Conditional Operators Results are Boolean, 'True' or 'False', '1' or '0'
    printf("\n\t%d", (x != y)); // Note all Commands & Conditions
    printf("\n\t%d", (x == y));
    printf("\n\t%d", (x <= y));
    printf("\n\t%d", (x >= y));

    /*

    int x = -1, y = 1;    // 0 Means False / Off.   Any Positive or Negative means True / On. Except 0, All Other Numbers True

    if (x && y)   // Check for '(!x && y)' too and other conditions
    {
        printf("Valid\n");
    }

    else
    {
        printf("Invalid\n");
    }

    */

//-------------------------------------------------

    /*

    int x = 10, y = 1;

    printf("%d", !x"); // Note here

    if(!x && y)    // 1 && 1
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    */

/*
Note :

x = 0 then !x = 1

x = 5 then !x = 0

x = 10 then !x = 0
*/
    return 0;
}
