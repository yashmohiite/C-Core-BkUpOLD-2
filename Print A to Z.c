#include<stdio.h>

/*




*/

int main ()

{
    int ch;

    ch = 65;

    while (ch <= 90)
    {
        printf("\n\t%d\t%c\t|\t%d\t%c", ch, ch, ch + 32, ch + 32);    // Note here
        ch++;
    }

    return 0;
}
