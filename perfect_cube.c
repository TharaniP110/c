#include<stdio.h>
 #include<math.h>
 int isPerfectCube(int n)
 {
     int cbrt_n=cbrt(n);
     return (cbrt_n*cbrt_n*cbrt_n==n);
 }
 int main()
 {
     int n;
     scanf("%d",&n);
     if(isPerfectCube(n))
     {
         printf("Perfect Cube");
     }
     else
     {
         printf("Not a Perfect Cube");
     }
 }
