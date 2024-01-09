#include<stdio.h>
struct data
{
    int n;
    float f;
    char c;
};
int main()
{
   struct data c;
   c.n=10;
   c.f=12.43;
   c.c='A';
   printf("%d %.2f %c",c.n,c.f,c.c);
}
