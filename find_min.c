#include <stdio.h>
int main() {
    int arr[1000],n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=1000000;
    for(int i=0;i<n;i++)
    {
       if(arr[i]<min)
       {
           min=arr[i];
       }
    }
    printf("The min element is : %d",min);
}
