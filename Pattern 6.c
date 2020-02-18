#include<stdio.h>
void main()
{
   int i,j,n,k;
   printf("Enter the number of rows");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       k=n-i;
       for(j=n;j>i;j--)
       {
           printf("%d",k);
           k--;
       }

      printf("\n");
   }
}
