#include<stdio.h>
 #include<math.h>
 int isPerfectSquare(int n)
 {
     int sqrt_n=sqrt(n);
     return (sqrt_n*sqrt_n==n);
 }
 int main()
 {
     int n;
     scanf("%d",&n);
     if(isPerfectSquare(n))
     {
         printf("Perfect Square");
     }
     else
     {
         printf("Not a Perfect Square");
     }
 }
