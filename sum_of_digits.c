#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d,sum=0;
    while(n!=0){
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("%d",sum);
}
