#include<stdio.h>
void swap(int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("Before swapping:%d %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping:%d %d",n1,n2);
}
