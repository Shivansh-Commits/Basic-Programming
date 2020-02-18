#include<stdlib.h> // Inclusion Of Header Files. (Consists Basic keywords / FUNctions)
#include<stdio.h> // Inclusion of Header Files.  (Necessary for Dynamic Memory Allocation).
void main()
{
int i,n,*a,sum=0;
float avg=0;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int)); //Allocation by Malloc ().

for(i=0;i<n;i++)//Finding the sum of Integers Stored in Dynamically Allocated Memory.
{
scanf("%d",(a+i));
sum=sum+*(a+i);
}

free(a);// freeing the pointer  as we do not require it anymore.
avg=sum/(float)n;
printf("%0.2f",avg);// printing Sum of both numbers upto 2 Decimal Places.
}
