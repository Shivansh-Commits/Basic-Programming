/*

1
3 2
6 5 4
10 9 8 7
15 14 13 12 11

*/

#include<stdio.h>
void main()
{
 int i,j,a=1,c,n;
 printf("Enter the no. of rows");
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a;
    for(j=1;j<=i;j++)
    {
        printf("%d ",a);
        a=a-1;
    }
    a=c;
     a=a+(i+1);
    printf("\n");
}

}
