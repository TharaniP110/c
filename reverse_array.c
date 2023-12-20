#include<stdio.h>
int main()
{
    int n,arr[50];
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reversed array elements are :");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
