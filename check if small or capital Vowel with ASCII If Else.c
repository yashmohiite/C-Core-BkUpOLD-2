#include<stdio.h>

int main ()

{
    char ch;

    printf("Enter a char to check if Small or Capital Vowel\n");
    scanf("%c", &ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) //Remember to give single quotes for checking a Single Character
    {
        printf("It's a Small Vowel\n");
    }
    else if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        printf("It's a Capital Vowel\n");
    }
    else if((ch >= 65) && (ch <= 90))
    {
        printf("It's a Ca[ital Character\n");
    }
    else if((ch >= 97) && (ch <= 122))
    {
        printf("It's a Small Character\n");
    }
    else if((ch >= 48) && (ch <= 57))
    {
        printf("It's a Number\n");
    }
    else
    {
        printf("It's another Character/Symbol\n");
    }

    printf("ASCII Value is %d for %c\n", ch, ch);

    return 0;
}
