#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}node_type;
void push(node_type **top)
{
    node_type *p;
    int n;
    p=(node_type *)malloc(sizeof(node_type));
    printf("INSERT VALUE TO BE PUSHED:");
    scanf("%d",&n);
    p->info=n;
    p->next=*top;
    *top=p;
}

void display(node_type *top)
{

        if(top==NULL)
        {
            return;
        }
        else
        {
            display(top->next);
            printf("%d ,",top->info);
        }
}

void main()
{
 node_type *top=NULL;
 int c;
 char ch='y';

    do
    {
        printf("1.Push\n2.Display\nEnter your choice:");
        scanf("%d",&c);
    switch(c)
    {
        case 1:push(&top);
               break;
        case 2:if(top==NULL)
                    {
                        printf("LIST EMPTY");
                    }
               else
                    {
                    display(top);
                    break;
                    }

    }
      fflush(stdin);
      printf("\n YOU WANT TO CONTINUE(y/n)");
      scanf("%c",&ch);
    }while(ch=='y');

}
