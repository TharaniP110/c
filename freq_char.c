#include<stdio.h>
#include<string.h>
#define MAX 256
int main()
{
    char str[100];
    scanf("%s",str);
    int freq[MAX]={0};
    for(int i=0;i<strlen(str);i++)
    {
        freq[(int)str[i]]++;
    }
    for(int i=0;i<MAX;i++)
    {
        if(freq[i]!=0)
        {
            printf("%c : %d\n",i,freq[i]);
        }
    }
}
