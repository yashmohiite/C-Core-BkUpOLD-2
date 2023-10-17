#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addrNext;
    struct Node *addrPrev;
}*newnode, *start, *curr;

void create(int);
void display();
void insertFirst(int);
void insertMiddle(int, int);
void deleteFirst();
void deleteMiddle(int);

int main()
{
    start=NULL;

    int n, ch, elm, loc;

    do
    {
        printf("\n1-Create\n2-Display\n3-Insert First\n4-Insert Middle\n5-Insert Last\n6-Delete First\n7-Delete Middle\n8-Delete Last\n9-Search\n10-Reverse\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter any Num:\n");
            scanf("%d", &n);
            create(n);
            printf("\n%d Inserted\n", n);
            display();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("\nEnter an Element to add in First Position\n");
            scanf("%d", &elm);
            insertFirst(elm);
            printf("%d Inserted at 1st Position\n", elm);
            break;

        case 4:
            printf("\nEnter an Element and Location after which to add Node\n");
            scanf("%d%d", &elm, &loc);
            insertMiddle(elm,loc);
            printf("\n%d Inserted after %d Position\n", elm, loc);
            break;

        case 5:
            break;

        case 6:
            deleteFirst();
            printf("\nFront Node Deleted\n");
            break;

        case 7:
            printf("\nEnter Position of the Node to be Deleted:\n");
            scanf("%d", &loc);
            deleteMiddle(loc);
            printf("\nNode at %d Location Deleted Successfully\n", loc);
            break;

        case 8:
            break;

        case 9:
            break;

        case 10:
            break;

        default:
            printf("\nWrong Choice, Check Again:\n");
            break;
        }
        printf("\nTo Continue, Press 1, Else Any Other Key to Exit\n");
        scanf("%d", &ch);
    }while(ch==1);
    return 0;
}

void create(int num)
{
    newnode=malloc(sizeof(struct Node));
    newnode->data=num;
    newnode->addrNext=NULL;
    newnode->addrPrev=NULL;

    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        curr=start;
        while(curr->addrNext!=NULL)
        {
            curr=curr->addrNext;
        }
        curr->addrNext=newnode;
        newnode->addrPrev=curr;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("\nDLL is EMPTY\n");
    }
    else
    {
        curr=start;
        while(curr!=NULL)
        {
            printf("|%u|%d|%u|->", curr->addrPrev, curr->data, curr->addrNext);
            curr=curr->addrNext;
        }
    }
}

void insertFirst(int num)
{
    newnode=malloc(sizeof(struct Node));
    newnode->data=num;
    start->addrPrev=newnode;
    newnode->addrNext=start;
    newnode->addrPrev=NULL;
    start=newnode;
}

void insertMiddle(int num, int loc)
{
    int cnt=1;
    struct Node *temp;
    newnode=malloc(sizeof(struct Node));
    newnode->data=num;
    curr=start;
    while(cnt<loc)
    {
        curr=curr->addrNext;
        cnt++;
    }
    temp=curr->addrNext;
    curr->addrNext=newnode;
    newnode->addrNext=temp;
    newnode->addrPrev=curr;
    temp->addrPrev=newnode;
}

void deleteFirst()
{
    struct Node *temp;
    temp=start;
    start=start->addrNext;
    temp->addrNext=NULL;
    start->addrPrev=NULL;
    free(temp);
}

void deleteMiddle(int loc)
{
    curr=start;
    int cnt=1;

    struct Node *temp, *nextNode;

    while(cnt<loc-1)
    {
        curr=curr->addrNext;
        cnt++;
    }
    temp=curr->addrNext;
    curr->addrNext=temp->addrNext;
    nextNode=temp->addrNext;
    nextNode->addrPrev=curr;
    temp->addrNext=NULL;
    temp->addrPrev=NULL;
    free(temp);
}
