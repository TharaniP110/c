#include <stdio.h>
#include<stdlib.h>
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int heapify(int arr[],int parent,int scope)
{
    int left,right;
    left=2*parent+1;
    right=2*parent+2;
    if(left>scope)
    {
        return 0;
    }
    else if(left==scope)
    {
        if(arr[parent]>arr[left])
        {
            int temp=arr[parent];
            arr[parent]=arr[left];
            arr[left]=temp;
        }
    }
    else
    {
        if((arr[left]<arr[right])&&(arr[parent]>arr[left]))
        {
            int temp=arr[parent];
            arr[parent]=arr[left];
            arr[left]=temp;
        }
        else if((arr[left]>arr[right])&&(arr[parent]>arr[right]))
        {
            int temp=arr[parent];
            arr[parent]=arr[right];
            arr[right]=temp;
        }
    }
}

int main()
{
    int arr[]={12,7,4,22,66,88,45,65,23,28};
    int size=sizeof(arr)/sizeof(int);
    int parent,scope;
    scope=size-1;
    while(scope>0)
    {
        parent=(size-1)/2;
        while(parent>=0)
        {
            heapify(arr,parent,scope);
            parent-=1;
        }
        int temp=arr[0];
        arr[0]=arr[scope];
        arr[scope]=temp;
        scope-=1;
    }
    display(arr,size);
    return 0;
}
