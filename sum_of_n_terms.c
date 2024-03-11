#include<stdio.h>
void result(int n,int sum)
{
    sum=sum+n;
    if(n!=0)
    {
        n--;
        result(n,sum);
    }
    else
    {
        printf("%d",sum);
    }
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    result(n,sum);
}
