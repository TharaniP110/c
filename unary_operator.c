#include<stdio.h>
int main()
{
    int a=10,b;
    b=++a;
    printf("Pre increment\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    a=10;
    b=a++;
    printf("Post increment\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    a=10;
    b=--a;
    printf("Pre decrement\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    a=10;
    b=a--;
    printf("Post decrement\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);
}
