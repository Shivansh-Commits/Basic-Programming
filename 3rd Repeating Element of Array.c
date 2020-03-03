#include<stdio.h>// Inclusion Of Header Files

void main()
{
int n,z=1;
printf("Enter the Size of Array:"); // Input the Size Of Array.
scanf("%d",&n);

int a[n],i,j,x=NULL,c=1;
printf("Enter the Elements of Array :"); //Input the Elements of Array.

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[j]!=x)
        {
            if(a[i]==a[j])
                {
                    c++;
                    a[j]=x;
                }
        }
    }
    if(a[i]!=x&&c>1)
    {
        if(z==3)
     printf("'%d' is the %drd Repeating Element of the Array",a[i],z);
     printf("\n");
     z++;
    }
    c=1;
}
}
