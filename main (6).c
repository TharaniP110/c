#include<stdio.h>
long int power(int a,int b)
{
    long int Power=1;
    for(int i=1;i<=b;i++)
    {
        Power*=a;
    }
    return Power;
}
int main()
{
    int a,b;
    scanf ("%d %d",&a,&b);
    long int result=power(a,b);
    printf("%ld", result);
}