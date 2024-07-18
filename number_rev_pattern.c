#include <stdio.h>
int main()
{
    int n=5;
    int count=1;
    
    for(int i=1;i<=n;i++)
    {
        int k=0;
        for(int j=1;j<=i;j++)
        {
            
            if(i%2!=0)
            {
                printf("%d",count);
                if(j!=i)printf("*");
            }
            else
            {
                printf("%d",count+i-j-k);
                k++;
                if(j!=i)printf("*");
            }
            count++;
        }
        
        printf("\n");
    }
}
