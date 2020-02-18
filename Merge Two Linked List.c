#include<stdio.h>//Inclusion of Essential Header file.
#include<stdlib.h>// Inclusion of Header File Necessary for Dynamic Memory Allocation.
#include<string.h>// Inclusion of Header File Consisting of String Functions.

typedef struct node // Definition of Structure Node
{
    int info;
    struct node_type *next;
}node_type;

void create(node_type *p)// Definition of Function to Create Linked List
{
int num;
char ch;
node_type *p1;
do
{

    scanf("%d",&num);
    p->info=num;
    printf("DO YOU WANT TO ENTER ANOTHER NUMBER (Y/N):");
    fflush(stdin);
    scanf("%c",&ch);
    if(toupper(ch)=='Y')
    {

       p1=(node_type*)malloc(sizeof(node_type));
       p->next=p1;
       p=p1;
       printf("\nEnter the Element :\n");
    }

}while(toupper(ch)=='Y');
p->next=NULL;

}

void link(node_type *p,node_type *q)//
{
while(p->next!=NULL)
{
    p=p->next;
}
p->next=q;
}


void main()
{
node_type *p;
node_type *q;
node_type *temp;
p=(node_type*)malloc(sizeof(node_type));
printf("\nEnter the Elements of 1 Linked List:\n");
create(p);
temp=p;
printf("\n1 Linked List :");
while(temp!=NULL)
{
    printf("%d ",temp->info);
    temp=temp->next;
}
printf("\n");

q=(node_type*)malloc(sizeof(node_type));
temp=q;

printf("\nEnter the Elements of 2 Linked List:\n");
create(q);
printf("\n2 Linked List :");
while(temp!=NULL)
{
    printf("%d ",temp->info);
    temp=temp->next;
}

link(p,q);
printf("\n\n:: LINKED ::\n");
printf("\nLINKED LIST AFTER LINKING: ");
temp=p;
while(temp!=NULL)
{
    printf("%d ,",temp->info);
    temp=temp->next;
}
printf("\n\n\n");

}

