#include<stdio.h>
#define max 5
int insert(int Q[max],int r)
{
r++;
printf("Enter the Element to INSERT : ");
scanf("%d",&Q[r]);
return r;
}
int serve(int Q[max],int f)
{
printf("Element Served : %d\n",Q[f]);
f++;
return f;
}
void display(int Q[max],int r,int f)
{
int i;
printf("\nELEMENTS IN QUEUE:");
for(i=f;i<=r;i++)
  {
    printf("%d ",Q[i]);
  }
  printf("\n");
}
void main()
{
int Q[max],n,r=-1,f=-1,check=1;
char control='y';
do
{
    do
    {
    printf("1.Insert\n2.Serve\n3.Display\n");
    printf("Enter Your Choice : ");
    check=1;
    scanf("%d",&n);
    if(n<1 || n>3)
        {
         check=0;
         printf("Enter Valid Choice \n\n");
        }

    }while(check!=1);

    switch(n)
    {
        case 1:if(r==max-1)
               printf("OVERFLOW\n");
               else
               {
                   r=insert(Q,r);
                   if(r==0)
                    f=0;
               }
               break;
        case 2:if(f==-1 && r==-1)
                   printf("UNDERFLOW\n");
               else
               {
                   f=serve(Q,f);
                   if(f==r+1)
                   {
                      r=-1;
                      f=-1;
                   }
               }
               break;
        case 3:if(f==-1)
                 printf("UNDERFLOW\n");
                 else
                 {
                    display(Q,r,f);
                 }
              break;

    }

       printf("TO CONTINUE PRESS Y ELSE PRESS N : ");
    fflush(stdin);
    scanf("%c",&control);
    printf("\n");

}while(control!='n');


}
