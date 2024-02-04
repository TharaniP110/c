#include<stdio.h>
#include<string.h>
int main()
{
    int binary,decimal=0,base=1;
    scanf("%d",&binary);
    while(binary>0)
    {
        int d=binary%10;
        binary/=10;
        decimal+=d*base;
        base*=2;
    }
    printf("%d",decimal);
}
