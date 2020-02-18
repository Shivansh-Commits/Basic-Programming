#include<stdio.h>
void main()
{
 int i,j,l,b;
 printf("Enter Length and Breadth Respectively:");
 scanf("%d",&l);
 scanf("%d",&b);
 for(i=1;i<=l;i++)
 {
     for(j=1;j<=b;j++)
     {
         if(i==1||i==l)
         {
              printf("*");
         }
         else
         {
             if(j==1||j==b)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
         }

     }
     printf("\n");
 }

}
