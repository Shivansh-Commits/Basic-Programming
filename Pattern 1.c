                                                                                                                               /*

0
01
010
0101
01010                                                                                                                            */


#include<stdio.h>
void main()
{
int i,j,k,n;
printf("Enter the no. of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    k=0;
    for(j=0;j<i;j++)
    {
        if(k==0)
        {
            printf("%d",k);
            k=1;

        }
        else
        {
            printf("%d",k);
            k=0;
        }
    }
    printf("\n");
}

}
