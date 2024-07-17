#include <stdio.h>
int main() 
{
    int arr[1000][1000],row,col;
    printf("Enter number of elements:");
    scanf("%d%d",&row,&col);
    printf("Enter elements:");
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
           printf("%d",arr[i][j]);
       }
    }
  
}
