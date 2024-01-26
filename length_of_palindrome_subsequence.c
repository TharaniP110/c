#include <stdio.h>
#include<string.h>

#define max(a,b) ((a>=b)? a:b)
int lps(char s[],int start,int end)
{
    if(start==end)
    {
        return 1;
    }
    else if(s[start]==s[end] && end==start+1)
    {
        return 2;
    }
    else if(s[start]==s[end])
    {
        return 2+lps(s,start+1,end-1);
    }
    else
    {
        return max(lps(s,start,end-1),lps(s,start+1,end));
    }
}
int main()
{
    char str[10000];
    scanf("%s",str);
    int a=lps(str,0,strlen(str)-1);
    printf("%d",a);
}
