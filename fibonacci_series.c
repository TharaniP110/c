#include<stdio.h>
int main()
{
    int n,first=0,sec=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",first);
        int nxt=first+sec;
        first=sec;
        sec=nxt;
    }
}
