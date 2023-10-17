#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *addr;
}*start, *curr, *temp;

void create(int);
void display();
void insertbeg(int);
void insertMiddle(int,int);
void deleteFirst();
void deleteMiddle(int);
void searchElement(int);

int main ()
{
    int n, ch, elm, pos;

    start=NULL;

    do
    {
        printf("\n1-Create\n2-Display\n3-Insert Beginning\n4-Insert Middle\n5-Insert Last\n6-Delete First\n7-Delete Middle\n8-Delete Last\n9-Search\n10-Reverse\n");
        printf("\nEnter Your Choice:\n");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            printf("Enter any Number");
            scanf("%d", &n);

            create(n);
            display();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("\nEnter any Num to insert in LL in Beginning\n");
            scanf("%d", &elm);
            insertbeg(elm);
            printf("\n%d is Inserted\n", elm);
            break;

        case 4:
            printf("Enter Element and Position to Insert in Middle\n");
            scanf("%d%d", &elm, &pos);
            insertMiddle(elm,pos);
            printf("\n%d is Inserted at %d Position\n", elm, pos);
            break;

        case 5:
            break;

        case 6:
            deleteFirst();
            printf("\nFirst Node Deleted\n");
            break;

        case 7:
            printf("Enter the Location of Node/Element to Delete:\n");
            scanf("%d", &pos);
            deleteMiddle(pos);
            printf("\nNode at %d Position Deleted Successfully\n", pos);
            break;

        case 8:
            break;

        case 9:
            printf("\nEnter the Element to be Searched:\n");
            scanf("%d", &elm);
            searchElement(elm);
            break;

        case 10:
            break;
        }
        printf("\nDo you want to continue? Press 1\n");
        scanf("%d", &ch);
    }while(ch==1);

    return 0;
}

void create(int n)
{
    temp=malloc(sizeof(struct Node));
    temp->data=n;
    temp->addr=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        //Find Last Node in the LL
        curr=start;
        while(curr->addr!=NULL)
        {
            curr=curr->addr;
        }
        curr->addr=temp;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("\nLL is Empty\n");
    }
    else
    {
        curr=start;
        while(curr!=NULL)
        {
            printf("|%d|%u|-->",curr->data, curr->addr);
            curr=curr->addr;
        }
    }
}

void insertbeg(int n)
{
    temp=malloc(sizeof(struct Node));
    temp->data=n;
    temp->addr=start;
    start=temp;
}

void insertMiddle(int elm, int pos)
{
    int cnt=1;
    curr=start;

    while(cnt<pos-1)
    {
        curr=curr->addr;
        cnt++;
    }
    //We Got Location Here of Node after which New Node will be Inserted
    //So insert Node After the Current Node
    temp=malloc(sizeof(struct Node));
    temp->data=elm;
    temp->addr=curr->addr;
    curr->addr=temp;
    printf("\nNode is Inserted\n");
}

void deleteFirst()
{
    temp=start;
    start=start->addr;
    temp->addr=NULL;
    free(temp);
}

void deleteMiddle(int loc)
{
    curr=start;
    int cnt=1;
    while(cnt<loc-1)
    {
        curr=curr->addr;
        cnt++;
    }
    temp=curr->addr;
    curr->addr=temp->addr;
    temp->addr=NULL;
    free(temp);
}

void searchElement(int elm)
{
    int flag=0;
    curr=start;
    while(curr!=NULL)
    {
        if(curr->data==elm)
        {
            flag=1;
            break;
        }
        curr=curr->addr;
    }
    if(flag==1)
    {
        printf("\nElement Found\n");
    }
    else
    {
        printf("Element NOT Found");
    }
}
