#include<stdio.h>
void main()
{

int i,j,n,k,a,s,l;
printf("Enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(k=n-i;k>0;k--)
    {
        printf(" ");
    }
    a=i;
    for(j=1;j<=i;j++)
    {
        printf("%d",a);
        a--;
    }
    if(i>1)
        {
            s=2;
           for(l=2;l<=i;l++)
             {
                printf("%d",s);
                s++;
             }
        }


    printf("\n");

}

}
