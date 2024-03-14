#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=4;i>=1;i--)
    {
        for(int k=0;k<n-i;k++)
        {
            printf("   ");
        }
        for(int j=0;j<i+i-1;j++)
        {
            printf(" * ");
        }

        for(int k=0;k<(n-i)*2;k++)
        {
            printf("   ");
        }
        for(int j=0;j<i+i-1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf("   ");
        }
        for(int j=0;j<i+i-1;j++)
        {
            printf(" * ");
        }

        for(int k=0;k<(n-i)*2;k++)
        {
            printf("   ");
        }
        for(int j=0;j<i+i-1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
