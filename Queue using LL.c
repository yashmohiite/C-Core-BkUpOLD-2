#include<stdio.h>
#include<stdlib.h>

void insertQ(int);
void deleteQ();
void displayQ();

struct Node
{
    int data;
    struct Node *addr;
}*front, *rear, *newnode, *temp;

int main()
{
    front=rear=NULL;

    int ch, elm;

    do
    {
        printf("\n****MENU, QUEUE Using LL****");
        printf("\n1-Insert in Q");
        printf("\n2-Delete from Q");
        printf("\n3-Display Q");
        printf("\nEnter your Choice:\n");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            printf("\nEnter an Int Type Element\n");
            scanf("%d", &elm);
            insertQ(elm);
            break;

        case 2:
            deleteQ();
            break;

        case 3:
            printf("\nElements in Queue using LL are:\n");
            displayQ();
            break;

        default:
            printf("\nEnter Correct Choice Again:\n");
            break;
        }
        printf("\nContinue Above Operations? Press 1. To Stop, Press 2\n");
        scanf("%d", &ch);
    }while(ch==1);

    return 0;
}

void insertQ(int n)
{
    temp=malloc(sizeof(struct Node));
    temp->data=n;

    if((front==NULL)&&(rear==NULL))
    {
        front=rear=temp;
    }
    else
    {
        rear->addr=temp;
        rear=rear->addr; //Or rear=temp;
    }
    printf("%d Inserted", n);
}

void deleteQ()
{
    if(front==rear)
    {
        temp=front;
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        front=front->addr;
        printf("%d Deleted", temp->data);
    }
    free(temp);
}

void displayQ()
{
    for(temp=front; temp!=rear; temp=temp->addr)
    {
        printf("|%d|%u|->", temp->data, temp->addr);
    }
    printf("|%d|%u|", temp->data, temp->addr);
}
