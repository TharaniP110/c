#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result=0;
    while(a>=b)
    {
        a-=b;
        result++;
    }
    printf("%d",result);
}
