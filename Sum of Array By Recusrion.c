#include<stdio.h>
#include<stdlib.h>
int sum(int[],int);
int main(){

int i,n;

printf("Enter the Size of Array:");
scanf("%d",&n);
int arr[n];

printf("\nEnter the elements of Array:");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("Sum of Array: %d ",sum(arr,n-1));


}

int sum(int arr[],int n){
if(n==0)
{
    printf("%d ,",arr[0]);
    return arr[0];
}
else
{
    printf("%d ,",arr[n]);
    return arr[n]+sum(arr,n-1);
}

}
