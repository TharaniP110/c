#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1,*p2,*p3;
    p1=(int*)malloc(sizeof(int));
    p2=(int*)malloc(sizeof(int));
    p3=(int*)malloc(sizeof(int));
    *p1=10;
    *p2=20;
    *p3=*p1+*p2;
    printf("%d",*p3);
}
