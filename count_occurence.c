#include<stdio.h>
int main()
{
    int n1,n2;
    int count=0;
    int d;
    scanf("%d%d",&n1,&n2);
    while(n1!=0)
    {
        d=n1%10;
        if(d==n2){
            count++;
        }
        n1=n1/10;
    }
    printf("%d",count);
}
