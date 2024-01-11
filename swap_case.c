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
            str[i]+=32;
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        else
        {
            str[i]=str[i];
        }
    }
  
    printf("%s",str);
}
