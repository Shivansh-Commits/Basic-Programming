#include<stdio.h> //Inclusion of Necessary Header File.\

int insertion_sort(int a[],int n)  // Definition of insertion Sort() function .
{
    int j,t,i;
for(i=1;i<n;i++)
{
    j=i-1;
    t=a[i];
    while(j>=0 && t<a[j])
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=t;
}
}

void main() 
{
    int n=0,i=0;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ELEMENTS OF ARRAY:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);  // Calling the Function insertion_sort() , which will implement Insertion sort on the Elements.
    for(i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}

