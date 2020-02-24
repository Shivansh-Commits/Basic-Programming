#include<stdio.h>
#include<limits.h>
void selectionsort(int a[],int n)
{
    int i,j,min=INT_MAX,k,temp=0;
    for(i=0;i<n-1;i++)
    {
        min=INT_MAX;
        for(j=i;j<n;j++)
        {
          if(a[j]<min)
          {
              min=a[j];
          }
        }

        temp=a[j];
        a[j]=a[i];
        a[i]=temp;

        printf("\n\n");
        for(k=0;k<n;k++)
         {
           printf("%d ,",a[k]);
         }
    }
}
void main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}
