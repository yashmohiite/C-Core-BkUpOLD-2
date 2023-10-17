#include<stdio.h>
#define M 5

int que[M];
int front=0, rear=0;

void insertQ(int);
int deleteQ();
void displayQ();

int main()
{
    int ch, data;

    do
    {
        printf("\n\n***MENU***\n\n");
        printf("\n1-InsertQ");
        printf("\n2-DeleteQ");
        printf("\n3-DisplayQ");
        printf("\n4-Exit");

        printf("\nEnter your Choice:");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            printf("\nEnter the Data\n");
            scanf("%d", &data);
            insertQ(data);
            break;

        case 2:
            data=deleteQ();
            if(data!=-1)
            {
                printf("\nThe Popped data is: %d\n", data);
            }
            break;

        case 3:
            printf("\nList of Nos in Queue\n");
            displayQ();
            break;

        case 4:
            printf("\nThank You\n");
            break;

        default:
            printf("\nWrong Choice\n");
        }
    }while(ch!=4);

    //return 0;
}

void insertQ(int data)
{
    if(rear==M)
    {
        printf("\nQueue is Full\n");
        return;
    }
    else
    {
        que[rear]=data;
        rear++;
    }
}

int deleteQ()
{
    int d;
    if(front==rear)
    {
        printf("\nQueue is Empty\n");
        return -1;
    }
    else
    {
        d=que[front];
        que[front]=0;

        front++;
        return d;
    }
}

void displayQ()
{
    int i;
    for(i=front; i<rear; i++)
    {
        printf("\n%d", que[i]);
    }
}
