#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
           printf(" ");
        for(int k=0;k<=i*2;k++)
           printf("*");
        printf("\n");
    }
}
