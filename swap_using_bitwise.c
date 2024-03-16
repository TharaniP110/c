#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("Before swapping : %d %d\n",n1,n2);
    n1=n1^n2;
    n2=n2^n1;
    n1=n1^n2;
    printf("After swapping : %d %d",n1,n2);
}
