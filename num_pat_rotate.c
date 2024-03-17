#include<stdio.h>
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        int c=i+1;
        int p=1;
        for(int j=4;j>i;j--)
        {
            printf("%d ",c);
            c++;
        }
        for(int k=0;k<i;k++)
        {
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}
