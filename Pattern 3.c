#include<stdio.h>
void main()
{
    int i,j,a=1,z,n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          if(i%2==0 && j%2!=0||i%2!=0&&j%2==0)
          {
              printf("-%d ",a);
              a++;
          }
          else
          {
              printf("%d",a);
              a++;
          }

        }
        printf("\n");
    }
}
