#include<stdio.h>  
#include<math.h>
int main()
{
    int n,i,j; 
    scanf("%d",&n); 
    int erotosthenes[n-1]; 
    for(i=0;i<=n-2;i++)
    {
        erotosthenes[i]=i+2;
    }
    for(i=0;erotosthenes[i]<=sqrt(n);i++)
    {
        if(erotosthenes[i]!=-1)
        {
            for(j=erotosthenes[i]*erotosthenes[i]-2;j<=n-2;j=j+erotosthenes[i])
            {
                if(erotosthenes[j]!=-1)
                {
                erotosthenes[j]=-1;
                }
            }
        }
    }
    for(i=0;i<=n-2;i++)
    {
        if(erotosthenes[i]!=-1)
        {
            printf("%d ",erotosthenes[i]);
        }
    }
    return 0;
}
