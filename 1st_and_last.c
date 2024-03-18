#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(i==0 || i==len-1)
        {
            printf("%c",str[i]);
        }
        else
        {
            printf("*");
        }
    }
}
