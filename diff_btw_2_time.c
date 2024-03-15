#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h1,h2,m1,m2,s1,s2;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    int tots1=(h1*3600)+(m1*60)+s1;
    int tots2=(h2*3600)+(m2*60)+s2;
    int diff_sec=tots1-tots2;
    diff_sec=diff_sec>0?diff_sec:diff_sec*-1;
    int rem_hr=diff_sec/3600;
    int rem_mn=(diff_sec%3600)/60;
    int rem_sec=(diff_sec%3600)%60;
    printf("%d:%d:%d",rem_hr,rem_mn,rem_sec);
}
