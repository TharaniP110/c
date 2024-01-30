#include<stdio.h>
void leftrotate_byone(int n,int arr[])
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void leftrotate(int n,int arr[],int rotate)
{
    for(int i=0;i<rotate;i++)
    {
        leftrotate_byone(n,arr);
    }
}
void printarray(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rotate=1;
    printf("Oridinal array: ");
    printarray(n,arr);
    leftrotate(n,arr,rotate);
    printf("Rotated array: ");
    printarray(n,arr);
    
}
