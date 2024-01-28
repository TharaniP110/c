#include<stdio.h>
int main()
{
    char ch;
    printf("Enter operator:");
    scanf("%c",&ch);
    int a,b;
    printf("Enter 2 values:");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case '+':
          printf("%d",a+b);
          break;
        case '-':
          printf("%d",a-b);
          break;
        case '*':
          printf("%d",a*b);
          break;
        case '%':
          printf("%d",a%b);
          break;
        case '/':
          printf("%d",a/b);
          break;
        default:
          printf("Invalid Operator...");
    }
}
