#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    int start=0;
    int end=len-1;
    int isPalindrome=1;
    while(start<end){
        if(str[start]!=str[end])
        {
            isPalindrome=0;
            break;
        }
      start++;
      end--;
    }
    if(isPalindrome)
    {
        printf("Given string is a Palindrome.");
    }
    else
    {
        printf("Given string is not a Palindrome.");
    }
}
