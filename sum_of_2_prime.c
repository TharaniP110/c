#include<stdio.h>
int prime(int n)
{
    int i;
    int isprime=1;
    if(n==0||n==1)
        isprime=0;
    else{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    }
    return isprime;
}
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(prime(i)==1)
        {
            if(prime(n-i)==1)
            {
                printf("Yes!. The given number is sum of two prime numbers.");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
