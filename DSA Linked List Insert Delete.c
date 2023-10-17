#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr;
}*start;

void create(int);
void display();
void insertFirst(int);
void insertMiddle(int,int);
void deleteFirst();
void deleteMiddle();
void search(int);

int main()
{
    start = NULL;

    int n, ch, elm, loc;

    do
    {
        printf("1-Create\n2-Display\n3-Insert First\n4-Insert Middle\n5-Delete First\n6-Delete Middle\n7-Search Element\n");
        printf("Enter your Choice\n");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            printf("\nEnter any Number\n");
            scanf("%d", &n);
            create(n);
            display();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Enter nay Value to Insert First Node\n");
            scanf("%d", &elm);
            insertFirst(elm);
            break;

        case 4:
            printf("Enter Number and Location to insert new node");
            scanf("%d%d", &n, &loc);
            insertMiddle(n,loc);
            break;

        case 5:
            deleteFirst();
            break;

        case 6:
            printf("Enter location to delete Node\n");

        }
    }

    return 0;
}
