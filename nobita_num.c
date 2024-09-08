#include<stdio.h>
#include<stdlib.h>

int nobi(int n)
{
  int prev=n%10;
  n/=10;
  int curr;
  while(n>0)
  {
    curr=n%10;
    if(abs(curr-prev)!=1)
    {
        return 0;
    }
    prev=curr;
    n/=10;
  }
  return 1;
}

int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int sum=0;
  for(int i=n;i<=m;i++)
  {
    if(nobi(i))
    {
      sum+=i;
    }
  }
  printf("%d",sum);
}
