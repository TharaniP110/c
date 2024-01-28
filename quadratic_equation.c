#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    float d=(b*b)-4*a*c;
    float root1,root2;
    if(d>0)
    {
        printf("Roots are real and different.\n");
        root1=(-b+((sqrt(d))))/2*a;
        root2=(-b-((sqrt(d))))/2*a;
        printf("Root1 = %f, Root2 = %f",root1,root2);
    }
    if(d==0)
    {
        printf("Roots are real and same.\n");
        root1=(-b)/(2*a);
        printf("Root1 = Root2 = %f",root1);
    }
    if(d<0)
    {
        printf("Roots are complex.\n");
        root1=(-b/(2*a));
        root2=(sqrt(-d))/(2*a);
        printf("Root1 = %f+i%f, Root2 = %f-i%f",root1,root2,root1,root2);
    }
}
