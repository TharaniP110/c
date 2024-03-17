#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i+1);
        else
            printf("%d ",i);
        for(int j=2;j<=n;j++)
            printf("%d ",i);
        if(i%2==1)
            printf("%d ",i+1);
        else
            printf("%d ",i);
        printf("\n");
    }
}
