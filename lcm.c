#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int gcd,lcm;
    int smaller=(n1<n2)?n1:n2;
    for(int i=1;i<smaller;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("%d",lcm);
}
