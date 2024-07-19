#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n%2==0)
    {
        printf("%d ",2);
        n/=2;
    }
    for(int i=3;i<n;i++)
    {
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
    }
    if(n>2){
        printf("%d ",n);
    }
}
