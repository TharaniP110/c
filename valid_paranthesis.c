#include<stdio.h>  
void solve(int n,char str[],int open,int close,int i)
{
   if(open==n&&close==n)
   {
       printf("%s\n",str);
   }
   else 
   {
       if(open<n)
       {
           str[i]='('; 
           solve(n,str,open+1,close,i+1); 
       } 
       if(open>close)
       {
           str[i]=')'; 
           solve(n,str,open,close+1,i+1); 
       }
   }
}
int main()
{
    int n; 
    scanf("%d",&n); 
    char str[2*n+1]; 
    str[2*n]='\0'; 
    str[0]='('; 
    int open=1,close=0; 
    solve(n,str,open,close,1);
    return 0;
}
