#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            for(int k=1;k<=6;k++)
            {
                if(n==(i+j+k))
                count++;
            }
        }
    }
    printf("%d",count);
}
