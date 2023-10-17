#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *addr;
}*last, *nn, *cur, *temp;

void create(int);
void display();
void insertFirst(int);
void insertMiddle(int, int);
void deleteFirst();
void deleteMiddle(int);

int main ()
{
    int n, ch, ch2, loc;

    do
    {
    printf("Circular LL:\n1-Create\n2-Display\n3-Insert Begin\n4-Insert Middle\n5-Insert Last\n6-Delete First\n7-Delete Middle\n8-Delete Last\n9-Search\n10-Reverse\nEnter Your Choice:\n");
    scanf("%d", &ch);

    switch(ch)
    {
    case 1:
        printf("Enter Element:\n");
        scanf("%d", &n);

        create(n);
        display();
        break;

    case 2:
        display();
        break;

    case 3:
        printf("\nEnter a Num to enter at Beginning\n");
        scanf("%d", &n);
        insertFirst(n);
        printf("\n%d Inserted at Start\n", n);
        break;

    case 4:
        printf("\nEnter Element and Position after which to Insert it\n");
        scanf("%d%d", &n, &loc);
        insertMiddle(n, loc);
        printf("\n%d Inserted at %d Position\n", n, loc+1);
        break;

    case 5:
        break;

    case 6:
        deleteFirst();
        printf("\nFirst Node Deleted Successfully\n");
        break;

    case 7:
        printf("\nEnter the Position of the Node which should be Deleted\n");
        scanf("%d", &loc);
        deleteMiddle(loc);
        printf("\nNode at %d Location, Deleted Successfully\n", loc);
        break;

    case 8:
        break;

    case 9:
        break;

    case 10:
        break;

    default:
        printf("Invalid, Please Check Again\n");
        break;
    }

    printf("\nDo you want to Continue? Press 1\n");
    scanf("%d", &ch2);
    }while(ch2==1);

    return 0;
}

void create(int n)
{
    nn = malloc(sizeof(struct Node));
    nn->data=n;
    nn->addr=NULL;

    if(last==NULL)
    {
        last=nn;
        last->addr=last;
    }
    else
    {
        nn->addr=last->addr;
        last->addr=nn;
        last=nn;
    }
}

void display()
{
    cur=last->addr;

    while(cur!=last)
    {
        printf("|%d|%u|-->", cur->data, cur->addr);
        cur=cur->addr;
    }
    printf("|%d|%u|-->", cur->data, cur->addr); //To display Last Node
}

void insertFirst(int n)
{
    nn=malloc(sizeof(struct Node));
    nn->data=n;
    nn->addr=last->addr;
    last->addr=nn;
}

void insertMiddle(int n, int loc)
{
    cur=last->addr;
    int cnt=1;
    nn=malloc(sizeof(struct Node));
    nn->data=n;

    while(cnt<loc)
    {
        cur=cur->addr;
        cnt++;
    }
    nn->addr=cur->addr;
    cur->addr=nn;
}

void deleteFirst()
{
    temp=last->addr;
    last->addr=temp->addr;
    temp->addr=NULL;
    free(temp);
}

void deleteMiddle(int loc)
{
    cur=last->addr;

    int cnt=1;

    while(cnt<loc-1)
    {
        cur=cur->addr;
        cnt++;
    }
    temp=cur->addr;
    cur->addr=temp->addr;
    temp->addr=NULL;
    free(temp);
}
