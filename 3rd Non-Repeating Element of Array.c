#include<stdio.h>// Inclusion of Header File.
void main()
{
int n,z=1;
printf("Enter the Limit: ");// Input Size of Array
scanf("%d",&n);

int a[n],i,j,c=0,k;
printf("\nEnter the Elements:");// Input Elements of Array

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]==a[j])
        {
            c++;
        }
    }
    for(k=i;k>=0;k--)
    {
        if(a[i]==a[k-1])
        {
            c++;
        }
    }
    if(c==0)
    {
        if(z==3)
        printf("%d is the %d Non-repeating term",a[i],z);
        z++;
        printf("\n");
    }
    c=0;
}
printf("\n");


}
