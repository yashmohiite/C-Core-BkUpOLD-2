#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr;
}*start;    //Note here, Global Variable

void create();
void display();

int main()
{
    //struct Node start = Null;
    int n, ch;
    start = NULL; //NULL must be Capital

    do
    {
        printf("\n1 - Create\n2 - Display\n");

        printf("Enter number to insert in Linked List\n");
        scanf("%d", &n);

        create(n);
        display();

        printf("\nDo you want to continue, Press 1\n");
        scanf("%d", &ch);
    }while(ch == 1);

    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}

void create (int n)
{
    struct Node *newnode, *curr;

    newnode = malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->addr=NULL;

    if(start == NULL)   //1000==NULL
    {
        start = newnode;
    }
    else
    {
        curr=start;
        while(curr->addr!=NULL)
        {   //NULL!=NULL
            curr=curr->addr;
        }
        curr->addr=newnode;
    }
}

void display()
{
    struct Node *curr;
    if(start==NULL)
    {
        printf("\nLinked list is Empty\n");
    }
    else
    {
        curr=start;
        printf("\n");

        while(curr!=NULL)   //4000!=NULL
        {
            printf("(%d,%u) -> ", curr->data, curr->addr);
            curr=curr->addr;
        }
    }
}
