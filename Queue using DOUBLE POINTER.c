#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node_type *next;
}node_type;

void insert(node_type **rr,node_type **ft)
{
 node_type *p;
 int n;
 p=(node_type*)malloc(sizeof(node_type));
 if(p==NULL)
 {
     printf("\nMEMORY NOT ALLOCATED");
 }
 else
 {
     printf("\nEnter the Value To be Inserted");
     scanf("%d",&n);
     p->info=n;
     p->next=NULL;
     if(*ft==NULL)
     {
         printf("FIRST TIME\n");
         *rr=p;
         *ft=p;
     }
     else
     {
         (*rr)->next=p;
         (*rr)=p;
     }
 }
}

void serve(node_type **ft,node_type **rr)
{
    node_type *temp;
    temp=*ft;
 if(*ft==NULL && *rr==NULL)
 {
     printf("QUEUE IS EMPTY");
 }
 else
 {
     printf("ELEMENT SERVED : %d",(*ft)->info);
     (*ft)=(*ft)->next;
     free(temp);
 }


}

void display(node_type *front,node_type *rear)
{
while(front!=NULL)
{
    printf("%d ",front->info);
    front=front->next;
}
printf("%d",front->info);
}


void main()
{

    char ch;
    int n;
    node_type *front=NULL;
    node_type *rear=NULL;

do
{

        printf("\n1.INSERT\n2.SERVE\n3.DISPLAY\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&n);
switch(n)
   {
   case 1:insert(&rear,&front);
          /*if(front==NULL)
          {
              front=rear;
          }*/
          break;


   case 2:serve(&front,&rear);
          if(front==NULL)
          {
              rear=NULL;
          }

          break;


   case 3:if(rear==NULL && front==NULL)
           {
               printf("\nQUEUE IS EMPTY");
           }
           else
           {
               display(&front,&rear);
           }
           break;
   }

    printf("\nDO YOU WANT TO CONTINUE : ");
    fflush(stdin);
    scanf("%c",&ch);
}while(ch=='y');

}

