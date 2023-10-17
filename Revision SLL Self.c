#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *addrnext;
}*start, *newnode, *curr;

void create(int);
void display();

int main ()
{
    int n, ch;

    start = NULL;

    do
    {
        printf("Enter Integer Data to enter in SLL:\n");
        scanf("%d", &n);

        create(n);
        display();

        printf("\nPress 1 if you wish to continue else Press any other key:\n");
        scanf("%d", &ch);
    }while(ch==1);
}

void create(int n)
{
    newnode = malloc(sizeof(struct Node));
    newnode->data = n;
    newnode->addrnext=NULL;

    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        curr=start;

        while(curr->addrnext!=NULL)
        {
            curr=curr->addrnext;
        }
        curr->addrnext=newnode;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("\nSLL is Empty\n");
    }
    else
    {
        curr=start; //Forgot this, IMP

        while(curr!=NULL) //Forgot this(Had written : (curr->addrnext!=NULL), IMP
        {
            printf("| %d | %u |-->", curr->data, curr->addrnext);
            curr=curr->addrnext;
        }
    }
}
