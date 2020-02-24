#include<stdio.h>
#include<stdlib.h>
int printArrayRev(int[],int);
void printArrayFor(int[],int);


int main(){

int i,n;

printf("Enter the Size of Array:");
scanf("%d",&n);
int arr[n];

printf("\nEnter the elements of Array:\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("Array in Reverse Sequence: ");
printArrayRev(arr,n-1);
printf("\n");
printf("Array in Forward Sequence: ");
printArrayFor(arr,n-1);

}

int printArrayRev(int arr[],int n){
if(n==0)
{
    printf("%d ",arr[0]);
    return arr[0];
}
else
{
    printf("%d ",arr[n]);
    return printArrayRev(arr,n-1);
}
}

void printArrayFor(int arr[],int n){
    if(n==0){
            printf("%d ",arr[n]);
        return;
    }



    printArrayFor(arr,n-1);
    printf("%d ",arr[n]);
}



