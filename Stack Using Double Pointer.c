#include<stdio.h>  //inclusion of header Files
#include<stdlib.h>
typedef struct node  //Defining Structure
{
    int info;
    struct node_type *next;
}node_type;

void PUSH(node_type **tp)  //Defining Function PUSH
{
    node_type *p;
    int n;
    p=(node_type*)malloc(sizeof(node_type));
    if(p==NULL)
    {
        printf("NOT ENOUGH MEMORY");
    }
    else
    {
        printf("Enter the Value to be Inserted :");
        scanf("%d",&n);
        p->info=n;
        p->next=*tp;
        *tp=p;
    }
}

void POP(node_type **tp)  //Defining Function POP
{
    if(*tp==NULL)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
       printf("ELEMENT POPED : %d\n",(*tp)->info);
       node_type *temp;
       temp=*tp;
       (*tp)=(*tp)->next;
       free(temp);
    }
}
void Display(node_type *top) //Defining Function Display
{
while(top!=NULL)
{
    printf("%d ",top->info);
    top=top->next;
}
}
void main()
{
    char ch;
    int n;
    node_type *top=NULL;

    do
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:PUSH(&top);
                   break;

            case 2:POP(&top);
                   break;

            case 3:Display(top);
                   break;
        }

        printf("\nDO YOU WANT TO CONTINUE (y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');

}
