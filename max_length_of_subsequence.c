#include<stdio.h>  
#include<string.h>
#define max(a,b) ((a>=b)?a:b)
int main()
{
    char str1[1000],str2[1000]; 
    scanf("%s %s",str1,str2); 
    int len1=strlen(str1);   
    int len2=strlen(str2); 
    int mat[len1+1][len2+1]; 
    int row,col;  
    for(row=0;row<=len1;row++)
    {
        for(col=0;col<=len2;col++)
        {
            if(row==0 || col ==0)
            {
                mat[row][col]=0;
            }
            else if(str1[row-1]==str2[col-1])
            {
                mat[row][col]=1+mat[row-1][col-1]; 
            }
            else 
            {
                mat[row][col]=max(mat[row-1][col],mat[row][col-1]);
            }
        }
    }
   printf("%d ",mat[len1][len2]); 
}
