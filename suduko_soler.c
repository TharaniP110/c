#include<stdio.h>   
void display(int suduko[9][9])
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d ",suduko[i][j]);
        }
        printf("\n");
    }
}
int issafe(int suduko[9][9],int row,int col,int digit)
{ //row=0 col=2 
  int i,j; 
  for(i=0;i<=8;i++)
  {
      if(suduko[row][i]==digit)
      {
          return 0;
      }
  }
  for(i=0;i<=8;i++)
  {
      if(suduko[i][col]==digit)
      {
          return 0;
      }
  }
  int x,y; 
  x=row/3*3; 
  y=col/3*3; 
  for(i=x;i<=x+2;i++)
  {
      for(j=y;j<=y+2;j++)
      {
          if(suduko[i][j]==digit)
          {
              return 0;
          }
      }
  }
  
  return 1;
    
}
void solve(int suduko[9][9],int row,int col)
{ 
    if(row==8 && col == 9)
    {
        display(suduko);
    }
    else 
    {
        if(col==9)
        {
            row++; 
            col=0;
        }
        if(suduko[row][col]==0) 
        {
            int digit; 
            for(digit=1;digit<=9;digit++)
            {
                int a=issafe(suduko,row,col,digit); 
                if(a==1)
                {
                    suduko[row][col]=digit;  
                    solve(suduko,row,col+1); 
                    suduko[row][col]=0;
                }
            }
        }
        else 
        {
            solve(suduko,row,col+1);
        }
    }
}
int main()
{
    int suduko[9][9];
    int i,j; 
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            scanf("%d",&suduko[i][j]);
        }
    }
    solve(suduko,0,0);
    return 0;
}
