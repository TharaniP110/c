#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m=(n-1)/2;
    int sundaram[m];
    for(i=0;i<=m;i++)
    {
        sundaram[i]=i+1;
    }
    int z;
    i=1;j=1;
    while(1)
    {
        z=i+j+2*i*j;
        if(i==j && z>m)
        {
            break;
        }
        else if(z<=m)
        {
            sundaram[z-1]=-1;
            j++;
        }
        else
        {
            i++;
            j=i;
        }
    }
    printf("%d ",2);
    for(i=0;i<=m-1;i++)
    {
        if(sundaram[i]!=-1)
        {
            printf("%d ",2*sundaram[i]+1);
        }
    }
}
