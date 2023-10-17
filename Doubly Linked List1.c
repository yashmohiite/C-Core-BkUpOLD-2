//Error

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr_next;
    struct Node *addr_prev;
}*start;

void create(int);
void display();

int main ()
{
    start = NULL;

    int n, ch, elm, loc;

    do
    {
        printf("\n1-Create\n2-Display\n");
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

        default:
            printf("\nInvalid\n");

            break;
        }

        printf("\nDo you want to Continue? Press 1");
        scanf("%d", &ch);
    }while(ch==1);

    printf("============================Thank You=============================");

    return 0;
}

void create (int n) //10 20 30 40
{
    struct Node *newnode, *curr;
    newnode = malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->addr_next=NULL;
    newnode->addr_prev=NULL;

    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        curr==start;
        while(curr->addr_next!=NULL)
        {
            curr=curr->addr_next;
        }
        curr->addr_next=newnode;
        newnode->addr_prev=curr;
    }
}

void display()
{
    struct Node *curr;

    if(start==NULL)
    {
        printf("\nLinked List is Empty\n");
    }
    else
    {
        curr=start;
        printf("\n");
        while(curr!=NULL)
        {
            printf("|%u|%d|%u|----->>>>", curr->addr_prev, curr->data, curr->addr_next);
            curr=curr->addr_next;
        }
    }
}
