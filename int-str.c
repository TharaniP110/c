#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[20];
    sprintf(str, "%d",n);
    printf("Integer %d\n",n);
    printf("String %s",str);
}
