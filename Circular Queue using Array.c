#include<stdio.h>
#include<stdlib.h>
#define a 5
void insertQ(int);
int main()
{
    return 0;
}

void insertQ(int n)
{
    if((front==0)&&(rear==M-1)||(front==rear+1))
    {
        printf("Circ Queue is Full\n");
    }
    else
    {
        if(rear==M-1)
        {
            rear=0;
            queue[rear]=n;
        }
        else
        {
            queue[++rear]=n;
        }
    }
}
