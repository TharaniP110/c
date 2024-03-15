#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=4;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<n-i-1;j++)
            printf("%d ",n-j);
        for(int k=0;k<=i+i;k++)
            printf("%d ",i+1);
        for(int j=0;j<n-i-1;j++)
            printf("%d ",i+j+2);
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            printf("%d ",n-j);
        for(int k=0;k<=i+i;k++)
            printf("%d ",i+1);
        for(int j=0;j<n-i-1;j++)
            printf("%d ",i+j+2);
        printf("\n");
    }
}
