#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result=0;
    for(int i=0;i<b;i++)
    {
        result+=a;
    }
    printf("%d",result);
}
