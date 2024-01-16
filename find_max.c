#include <stdio.h>
int main() 
{
    int arr[1000],n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
       }
    }
    printf("The max element is : %d",max);
}
