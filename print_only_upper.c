#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%[^\n]s",str);
  
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]);
        }
    }
}
  
