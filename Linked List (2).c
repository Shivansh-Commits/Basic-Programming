#include<stdio.h> //Inclusion of Header File (Consists Basic Keywords / Functions )
#include<stdlib.h>// Inclusion of Header File (Necessary for Dynamic Memory Allocation)
typedef struct node // Definition of Structure 'node'
{
    int info;
    struct node_type *next;
}node_type;

node_type *insert(node_type *first,node_type *last) // Definition of Function Insert().
{
 int n;
 node_type *p; //Declaring a node Type pointer.
 p=(node_type*)malloc(sizeof(node_type)); //Allocating Memory Dynamically

     printf("\nEnter the no. to be inserted :");
     scanf("%d",&n);
     p->info=n;
     if(last==NULL)
     {
         last=p;
     }
     else
     {
         last->next=p;
         last=p;
         last->next=first;
     }

return last;

 }
node_type *serve(node_type *first,node_type *last)// Definition of Function Serve().
{
    if(last==first)
    {
       printf("Element Served :%d ",first->info);
       first=NULL;
    }
    else
    {
      printf("Element Served : %d",first->info);
      last->next=first->next;
      first=first->next;
    }

return first;
}

void display(node_type *front,node_type *last) //Definition of Function Display().
{
    printf("\nLINKED LIST:");
    do
    {
        printf("%d ",front->info);
        front=front->next;
    }while(front!=last);

    printf("%d",front->info);
}


void main()
{
int n;
char ch;
node_type *first=NULL;
node_type *last=NULL;
do
{
printf("1.INSERT\n2.SERVE\n3.DISPLAY\nEnter your Choice: ");
scanf("%d",&n);
switch(n)
{
    case 1:
            last=insert(first,last);
            if(first==NULL)
            {
                first=last;
            }
           break;
    case 2: if(first==NULL && last==NULL)
                {
                  printf("\nLINKED LIST EMPTY\n");
                }
            else
            {
                first=serve(first,last);
                if(first==NULL)
                {
                    last=NULL;
                }
            }
            break;
    case 3:if(first==NULL && last==NULL)
                {
                  printf("\nLINKED LIST EMPTY\n");
                }
                else
                {
                  display(first,last);
                }
            break;
}
printf("\nTO CONTINUE PRESS (Y/N):");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y');
}
