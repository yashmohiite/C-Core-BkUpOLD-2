//Stack using Arrays, 5 Numbers Elements

#include<stdio.h>
#define SIZE 5

int main ()
{

    int stack[SIZE], top=-1, elt, choice, i;

    do
    {
        printf("\n\n\n***= MENU =***\n");
        printf("\n1-PUSH");
        printf("\n2-POP");
        printf("\n3-DISPLAY");
        printf("\n4-EXIT");

        printf("\n\nPlease Enter Your Choice\n");
        scanf("%d", &choice); //1

        switch(choice)
        {
        case 1: //PUSH
            printf("\nEnter Element to be Pushed: ");
            scanf("%d", &elt); //10 20 30
            if(top==SIZE-1) //4==4
            {
                //Checking the is FULL() Condition
                printf("\nStack Full!");
            }
            else
            {
                stack[++top]=elt; //top = 1
                printf("%d Pushed", elt); //10
            }
            break;

        case 2: //POP
            if(top==-1) //Checking the 0==-1 //is Empty() Condition
            {
                printf("\nStack Empty!\n");
            }
            else
            {
                printf("\n%d Popped", stack[top]); //10
                stack[top]=0;
                top--; //0
            }
            break;

        case 3: //Display
            i=top;
            printf("\nStack:\n");

            while(i!=-1)
            {
                printf("\n%d", stack[i]); //50 40 30 20 10
                i--; //0
            }
            break;

        case 4: //Exit
            printf("/nThank You/n");
            break;

        default:
            printf("\nPlease Enter Correct Choice\n");
        }
    }while(choice!=4);

    return 0;
}
