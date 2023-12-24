#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%[^\n]s",str);
  
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]-=32;
    }
  
    printf("%s",str);
}
