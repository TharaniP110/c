#include<stdio.h>  
void permutation(int arr[],int start,int end)
{
    if(start==end)
    {
       for(int i=0;i<=end;i++)
       {
           printf("%d ",arr[i]);
       } 
       printf("\n");
    }
    else 
    {
        for(int i=start;i<=end;i++) 
        {
            int temp=arr[i]; 
            arr[i]=arr[start]; 
            arr[start]=temp; 
            permutation(arr,start+1,end); 
            temp=arr[i]; 
            arr[i]=arr[start]; 
            arr[start]=temp;
        }
    }
}
int main()
{
    int n; 
    scanf("%d",&n); 
    int arr[n]; 
    int i; 
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    } 
    permutation(arr,0,n-1); 
    return 0;
}
