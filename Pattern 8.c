#include<stdio.h>
void main()
{
    int i,j,k,a=1,n;
    printf("Enter rows");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=(n-i);j>0;j--)
       {
           printf(" ");
       }

       for(k=1;k<=i;k++)
       {
           printf("%d",a);
           a++;
       }

       printf("\n");
   }
}
