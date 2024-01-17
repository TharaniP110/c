#include <stdio.h>
int main() 
{
    int n,pos,element;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter insert position:");
    scanf("%d",&pos);
    printf("Enter insert element ");
    scanf("%d",&element);
    
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}
