//9/12/22
//Running Partially
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *right, *left;
}*root, *p, *q;

struct node *make(int y)//void create(int n) {malloc..} Like in Linked List, the Create Function
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=y;
    newnode->right=newnode->left=NULL;
    return(newnode);
}

void left(struct node *r, int x)
{
    if(r->left!=NULL)
        printf("\nInvalid !");
    else
        r->left=make(x);
}

void right(struct node *r, int x)
{
    if(r->right!=NULL)
        printf("\nInvalid !");
    else
        r->right=make(x);
}

void inorder(struct node *r)
{
    if(r!=NULL)
    {
        inorder(r->left);
        printf("\t%d", r->data);
        inorder(r->right);
    }
}

void preorder(struct node *r)
{
    if(r!=NULL)
    {
        printf("\t%d", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct node *r)
{
    if(r!=NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("\t%d", r->data);
    }
}

void create()
{
    int no;
    char choice='y';
    printf("\nEnter the Root:");
    scanf("%d", &no);
    root=make(no);
    //p=root
    while(choice=='y'||choice=='Y')
    {
        printf("\nEnter Num or Enter -1 to Stop\n");
        scanf("%d", &no);
        if(no==-1)
        {
            break;
        }
        p=root;
        q=root;
        while(no!=p->data && q!=NULL)
        {
            p=q;
            if(no<p->data)
                q=p->left;
            else
                q=p->right;
        }
        if(no<p->data)
        {
            printf("Left Branch of %d is %d", p->data, no);
            left(p, no);
        }
        else
        {
            right(p, no);
            printf("Right Branch of %d is %d\n", p->data, no);
        }
        printf("\nCONTINUE? Press 'y' or 'Y'\n");
        scanf("%c", &choice);
    }
}

int main ()
{
    int no, action=1, ch=1;
    do
    {
        printf("\n1: Create");
        printf("\n2: Inorder Traversal");
        printf("\n3: Preorder Traversal");
        printf("\n4: Postorder Traversal");
        printf("\n5: Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &action);
        switch(action)
        {
        case 1:
            create();
            break;
        case 2:
            printf("\nInorder Traversal is :\n");
            inorder(root);
            break;
        case 3:
            printf("\nPreorder Traversal is :\n");
            preorder(root);
            break;
        case 4:
            printf("\nPostorder Traversal is :\n");
            postorder(root);
            break;
        case 5:
            //printf("\nExecution Successfull\n");
            ch=5;
            break;
        }
        //getch();
        //printf("\nTo Stop Enter 5\n");
        //scanf("%d", &ch);
    }while(ch!=5);
    return 0;
}
