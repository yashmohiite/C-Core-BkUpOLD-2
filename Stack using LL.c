#include<stdio.h>
#include<stdlib.h>

#define M (node*)malloc(sizeof(node)) //Constant

typedef struct node //Userdefined type = typedef
{
    int data;
    struct node*next;
}node;

int main()
{
    node*top=NULL, *newnode, *temp;

    int choice, elt;

    do
    {
        printf("\n1-Push\n2-Pop\n3-Display\n4-Exit\n");
        printf("Enter your Choice");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("\nEnter Element to Push\n");
            scanf("%d", &elt);
            if(top==NULL)
            {
                top=M;
                top->data=elt;
                top->next=NULL;
            }
            else
            {
                newnode=M;
                newnode->data=elt;
                newnode->next=top;
                top=newnode;
            }
            printf("\n%d Pushed\n", elt);
            break;

        case 2:
            if(top==NULL)
            {
                printf("\nStack is Empty\n");
            }
            else
            {
                elt=top->data;
                temp=top;
                top=top->next;
                free(temp);
                printf("\n%d Popped\n", elt);
            }
            break;

        case 3:
            if(top==NULL)
            {
                printf("\nStack is Empty\n");
            }
            else
            {
                printf("\nStack:");

                for(temp=top; temp!=NULL; temp=temp->next)
                {
                    printf("\n%d", temp->data);
                }
            }
            break;

        case 4:
            printf("\n\nThank You\n\n");
            break;

        default:
            printf("\n\nInvalid Choice\n\n");
        }
    }while(choice!=4);

    return 0;
}
