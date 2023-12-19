#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    int digit,rev=0;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("%d",rev);
}