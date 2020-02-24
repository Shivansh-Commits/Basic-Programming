#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5
int push(int stack[],int top)
{
    top++;
    printf("Enter Element to be PUSHED:");
    scanf("%d",&stack[top]);
    printf("\nElement PUSHED: %d\n",stack[top]);
    return top;
}
int pop(int stack[],int top)
{
  printf("\nElement Popped :%d\n",stack[top]);
  top--;
  return top;
}
void main()
{
    int ch,stack[max],n,top=-1,control=1,temp,i,check=1;
    do{
            do
            {
                check=1;
                printf(" 1.Push\n 2.Pop\n 3.Display\n");
                printf("\nEnter your choice:");
                scanf("%d",&ch);
                   if(ch<1 || ch>3)
                        {   check=0;
                            printf("Enter Valid Choice\n");
                        }
            }while(check!=1);
        switch(ch)
        {
            case 1:
                  if(top==4)
                  {
                    printf("STACK OVERFLOW");
                  }
                  else
                  {
                    top=push(stack,top);
                  }
                  break;
           case 2:if(top<0)
                  {
                      printf("STACK UNDERFLOW");
                  }
                  else
                  {
                      top=pop(stack,top);
                  }
                  break;
            case 3:if(top==-1)
                   {
                       printf("STACK EMPTY");
                   }
                   else
                   {
                       temp=top;
                       for(i=0;i<=top;i++)
                       {
                           printf("%d ",stack[temp]);
                           temp--;
                       }
                   }
                   break;
            }
                  printf("\nTO CONTINUE PRESS 1 , OR PRESS 0: ");
                  scanf("%d",&control);

        }while(control!=0);
    }
