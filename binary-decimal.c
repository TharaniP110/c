#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    int ans=0;
    while(n!=0)
    {
        ans=ans+(n%10)*a;
        n/=10;
        a=a*2;
    }
    printf("%d",ans);
}
