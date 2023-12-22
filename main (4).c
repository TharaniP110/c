#include <stdio.h>
int main()
{
    int n,arr[1000];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The descending ordered elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
