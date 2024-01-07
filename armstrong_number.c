#include<stdio.h>
#include<math.h>
int main()

{
    int n;
    scanf("%d",&n);
    int temp=n,count=0;
    while(n>0)
    {
       n/=10;
       count++;
    }
    n=temp;
    int d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum+=pow(d,count);
        n/=10;
    }
    if(sum==temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}
