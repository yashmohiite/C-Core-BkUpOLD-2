#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addrnext; //addrnext is a structure pointer, its data type is structure
}; //we can allocate memory for variables of type struct in this line also, like in other examples: " }*start,*temp,*curr; "

struct Node *start, *curr, *newnode; //These variables have data type: struct Node

void create(int);
void display();

int main ()
{
    start = NULL; //Initially, Nothing in LL

    int n, ch;

    do
    {
        printf("Enter any Number/Data:\n");
        scanf("%d", &n);

        create(n);
        display();

        printf("\nIf Continue, Press 1\n");
        scanf("%d", &ch);
    }while(ch==1);

    return 0;
}

void create(int n)
{
    newnode = malloc(sizeof(struct Node)); //Memory Created/Allocated / Node Created
    newnode->data=n; //For pointers we write " -> "
    newnode->addrnext=NULL; //we write * when we want to print the actual value in it. if no * then we are working with the address

    if(start==NULL)
    {
        start=newnode; //Initially LL Created. Only First Time Start is NULL
    }
    else
    {
        //Find Last Node in the List, so new node can be attached
        curr=start;

        while(curr->addrnext!=NULL)
        {
            curr=curr->addrnext; //Increment / We go ahead in LL.
        }
        curr->addrnext=newnode;  //Address of New Node in addrnext of curr Node
    }
}

void display()
{
    if(start==NULL)
    {
        printf("LL is Empty\n");
    }
    else
    {
        curr=start;
        while(curr!=NULL)
        {
            printf("| %d | %u |--->", curr->data, curr->addrnext);
            curr=curr->addrnext;
        }
    }
}
