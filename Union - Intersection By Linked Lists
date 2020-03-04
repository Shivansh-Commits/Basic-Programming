#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int info;
    struct node *next;
}node_type;

void insert(node_type **head,node_type **tail,int e)
{
    node_type *p;
    p=(node_type*)malloc(sizeof(node_type));
    if(p==NULL)
        printf("NOT ENOUGH MEMORY");
    else
    {
        if((*head)==NULL && (*tail)==NULL)
        {
            p->info=e;
            p->next=NULL;
            (*tail)=p;
            (*head)=p;
        }
        else
        {

        (*tail)->next=p;
         p->info=e;
         p->next=NULL;
        (*tail)=p;

        }
    }
}
void union1(node_type **head1,node_type **head2,node_type **head_u,node_type **tail_u)
{
    node_type *p,*temp,*temp_u;
    temp=*head1;
    int chk,flag=0,element;
while(temp!=NULL)
{
    p=(node_type*)malloc(sizeof(node_type));
    if((*head_u)==NULL && (*tail_u)==NULL)
    {
        (*head_u)=p;
        (*tail_u)=p;
        (*tail_u)->info=temp->info;
        (*tail_u)->next=NULL;
    }
    else
    {
      (*tail_u)->next=p;
      (*tail_u)=p;
      (*tail_u)->info=(temp)->info;
      (*tail_u)->next=NULL;

    }
    temp=temp->next;
}



temp=*head2;
temp_u=*head_u;
while(temp!=NULL)
{
    element=temp->info;

   while(temp_u!=NULL)
        {
            if(element==(temp_u)->info)
            {
                flag=1;
                printf("SAME ELEMENT FOUND\n");
            }
        temp_u=temp_u->next;
        }

    if(flag==0)
    {
      p=(node_type*)malloc(sizeof(node_type));
      (*tail_u)->next=p;
      (*tail_u)=p;
      (*tail_u)->info=(temp)->info;
      (*tail_u)->next=NULL;
    }
flag=0;
temp=temp->next;
temp_u=*head_u;
}


}

void intersection(node_type **head1,node_type **head2,node_type **head_i,node_type**tail_i)
{
    node_type *temp1,*temp2,*p;
temp1=(*head1);
temp2=(*head2);
while(temp1!=NULL)
      { printf("IN LOOP 1\n");

          while(temp2!=NULL)
        { printf("IN LOOP 2\n");

            if((temp1)->info==(temp2)->info)
            { printf("FOUND COMMON");

                 p=(node_type*)malloc(sizeof(node_type));
                if((*head_i)==NULL && (*tail_i)==NULL)
                    {
                        (*head_i)=p;
                        (*tail_i)=p;
                        (*tail_i)->info=temp1->info;
                        (*tail_i)->next=NULL;
                    }
                else
                    {
                        (*tail_i)->next=p;
                        (*tail_i)=p;
                        (*tail_i)->info=temp1->info;
                        (*tail_i)->next=NULL;

                    }
            }
                temp2=temp2->next;
        }
        temp2=*head2;
        temp1=temp1->next;
      }

}

void display(node_type *head)
{
    if(head==NULL)
        printf("LIST IS EMPTY\n");
    else
    {
       while(head!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }
    }

}
void main()
{
node_type *head1=NULL,*tail1=NULL;
node_type *head2=NULL,*tail2=NULL;
node_type *head_u=NULL,*tail_u=NULL;
node_type *head_i=NULL,*tail_i=NULL;
char ch='y';
int c,e;
do
{
printf("\n");
printf("1.INSERT INTO 1 list\n2.INSERT INTO 2 list\n3.DISPLAY 1 list \n4.DISPLAY 2 list\n5.UNION\n6.INTERSECTION\n7.DISPLAY UNION\n8.DISPLAY INTERSECTION\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&c);
switch(c)
{
case 1:
    printf("ENTER THE ELEMENT TO BE INSERTED:");
    scanf("%d",&e);
    insert(&head1,&tail1,e);
    break;
case 2:
    printf("ENTER THE ELEMENT TO BE INSERTED:");
    scanf("%d",&e);
    insert(&head2,&tail2,e);
    break;
case 3:
    display(head1);
    break;
case 4:
    display(head2);
    break;
case 5:
    union1(&head1,&head2,&head_u,&tail_u);
    printf("\nOPERATION PERFORMED");
    break;
case 6:
    intersection(&head1,&head2,&head_i,&tail_i);
     printf("\nOPERATION PERFORMED");
    break;
case 7:
    display(head_u);
    break;
case 8:
    display(head_i);
    break;


}
fflush(stdin);
printf("\nDO YOU WANT TO CONTINUE(y/n)?\n");
scanf("%c",&ch);
}while(ch=='y');



}
