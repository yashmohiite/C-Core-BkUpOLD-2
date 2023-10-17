#include<stdio.h>
#include<stdlib.h>

void categDisplay();

int main ()
{
    int cart, wlist, categch, cat1ch, cat2ch, cat3ch, cat4ch;
    int list, list1, list2, list3, list4;

    printf("---------Shopping App---------Cart Items : %d----Wishlist Items : %d\n\n\n\n", cart, wlist);
    printf("CATEGORIES:   1.Men\t   2.Women \t   3.Electronics   \t 4.Fresh   \n\n");
    printf("Enter your Choice of Category:\n");
    scanf("%d", &categch);

    switch(categch)
    {
    case 1:
        printf("MEN:\n1-Item A\n2-Item B\n3-Item C\n");
        printf("Enter your choice to select Item\n");
        scanf("%d", &cat1ch);
        categDisplay();
        break;

    case 2:
        printf("WOMEN:");
        break;

    case 3:

        break;

    case 4:

        break;
    }

    return 0;
}

void categDisplay()
{
    int list;
    printf("1-Add to Cart\n2-Delete this Item\n3-Wishlist this Item\n");
    printf("Enter your Choice:");
    scanf("%d", &list);
}
