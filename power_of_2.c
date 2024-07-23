#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=(n>0 && (n&(n-1))==0);
    if(c){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
