#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%[^\n]s",str);
    int length=strlen(str);
    
    for(int i=length;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
