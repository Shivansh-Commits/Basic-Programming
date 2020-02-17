#include<stdio.h> //Inclusion of Header File
void main()
{
int i,j,t,n,flag;
printf("ENTER THE SIZE OF ARRAY:");
scanf("%d",&n);

int a[n];
printf("ENTER THE ELEMENTS OF ARRAY:\n");

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{
    if(flag==0)
    {
    break;
    }

    for(j=0;j<n-1-i;j++)
    {
        flag=0;
        if(a[j]>a[j+1])
            {
                flag=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    }
}
printf("SORTED ARRAY:");
for(i=0;i<n;i++)
{
    printf("%d ,",a[i]);
}

}
