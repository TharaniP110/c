#include<stdio.h>
int main()
{
    int n,arr[50],a;
    
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    printf("Enter the position need to remove :");
    scanf("%d",&a);
    
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf(" Reversed and after removing a element from array :");

   for(int i=0;i<n;i++)
    {
        if(i==a){
            continue;
        }
        else{
            printf("%d ",arr[i]);
        }
    }
}
