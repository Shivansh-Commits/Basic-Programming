#include<stdio.h>// Inclusion of Header Files.(Consists Basic keywords / Functions).
#include<stdlib.h> // Inclusion of Header Files.  (Necessary for Dynamic Memory Allocation).
typedef struct node
{
    struct node_type *prev;
    int info;
    struct node_type *next;

}node_type;

void insertion(node_type **left,node_type **right) // Definition of insertion() function , which is used to Insert Elements Into the Doubly Linked List
{
    int num;
    node_type *p,*temp,*x;
    p=(node_type*)malloc(sizeof(node_type));
    if((*right)==NULL)
    {
        printf("\nEnter the value to be Inserted: ");
        scanf("%d",&num);
        p->info=num;
        p->next=NULL;
        p->prev=NULL;
        *right=p;
    }
    else
    {
        printf("\nEnter the Value to be Inserted: ");
        scanf("%d",&num);

        if(num> (*right)->info)
        {
            (*right)->next=p;
            p->next=NULL;
            p->prev=(*right);
            p->info=num;
            (*right)=p;
        }
        else if(num < (*left)->info)
        {
           p->next=(*left);
           p->prev=NULL;
           p->info=num;
           (*left)->prev=p;
           (*left)=p;
        }
        else
        {
            temp=(*right);
            while(num>temp->info)
            {
                temp=temp->next;
            }
            x=temp->prev;
            x->next=p;
            p->prev=x;
            p->next=temp;
            p->info=num;
        }
    }
}

void display(node_type **left)
{
    printf("\n");
    node_type *temp;
    temp=*left;
while(temp!=NULL)
{
    printf("%d ,",temp->info);
    temp=temp->next;
}

}

void main()
{
int n;
char ch='y';
node_type **left=NULL,**right=NULL;

do
{
    printf("\n1.INSERT\n2.DISPLAY\n");
    printf("Enter Your choice: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:insertion(&left,&right);
               if(left==NULL)
               {
                left=right;
               }
               break;

        case 2:display(&left);
               break;
    }
printf("\nDO YOU WANT TO CONTINUE(Y/N): ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y');

}
