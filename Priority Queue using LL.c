//INCOMPLETE
#include<stdio.h>
#include<stdlib.h>

void insert(int num, int prio)
void display();
void deletePq();

struct node
{
    int priority;
    int data;
    struct node *nextAddr;
}*front==NULL, *temp, *q, *ptr;

int main()
{
    char choice='y';
    int action, n, prio;

    while(1)
    {
        printf("1] Insert\n");
        printf("2] Delete\n");
        printf("3] Display\n");
        printf("4] Exit");

        printf("Enter your Choice: ");
        scanf("%d", &action);

        switch(action)
        {
        case 1:
            choice='y';

            while(choice=='y' || choice=='Y')
            {
                printf("Enter a Num & Priority: ");
                scanf("%d%d", &n, &prio);
                insert(n, prio);
                printf("\n");
                display();
                printf("\nContinue?\n");
                scanf("%c", &choice);
            }
            getch();
            break;

        case 2:
            choice='y';
            while(choice=='y' || choice=='Y')
            {
                deletePq();
                printf("\n");
                display();
                printf("\nContinue?\n");
                scanf("%c", &choice);
            }
            getch();
            break;

        case 3:
            display();
            break;

        case 4:
            break;
        }
    }
    return 0;
}

void insert(int num, int prio)
{
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->priority=prio;

    if(front==NULL || prio<front->priority)
    {
        temp->addrNext=front;
        front=temp;
    }
    else
    {
        q=front;
        while(q->addrNext!=NULL && q->addrNext->priority<=prio)
        {
            q=q->addrNext;
        }
        temp->addrNext=q->addrNext;
        q->addrNext=temp;
    }
}

void display()
{
    ptr=front;
    if(front==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\nData \t Priority\n");
        while(ptr!=NULL)
        {
            printf("%d \t %d\n", ptr->data, ptr->priority);
            ptr=ptr->addrNext;
        }
    }
}

void deletePq()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        temp=front;
        front=front->addrNext;
        free(temp);
    }
}
