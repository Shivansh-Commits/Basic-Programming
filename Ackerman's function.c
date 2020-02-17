#include<stdio.h> //Inclusion of Header File.

int a(int m,int n)
{
    if(m==0)
        return n+1;
    else if(m>0 && n==0)
        return a(m-1,1); // Recursive Call
    else
        return a(m-1,a(m,n-1));// Recursive Call
}
void main()
{
    int m,n,res;
    printf("Enter m & n:");
    scanf("%d%d",&m,&n);
    res=a(m,n); //Calling Function a() from main.
    printf("%d",res);

}

