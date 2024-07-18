#include <stdio.h>
int main()
{
    int n=5;
    int count=0;
    int k=0;
    for(int i=1;i<=n;i++)
    {
        count=k;
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d",count+i);
                count-=1;
                if(j!=i){
                    printf("*");
                    
                }
                k++;
            }
            else
            {
                count++;
                printf("%d",count);
                if(j!=i){
                    printf("*");
                }
                k++;
            }
        }
        printf("\n");
    }
}
