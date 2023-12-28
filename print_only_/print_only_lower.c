#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%[^\n]s",str);
  
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]>='z')
        {
            printf("%c",str[i]);
        }
    }
}
  
