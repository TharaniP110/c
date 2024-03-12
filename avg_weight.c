#include<stdio.h>
#include<stdlib.h>
int main()
{
    int stu;
    scanf("%d",&stu);
    int w[stu];
    for(int i=0;i<stu;i++)
    {
        scanf("%d",&w[i]);
    }
    float avg=0.0;
    for(int i=0;i<stu;i++)
    {
        avg+=w[i];
    }
    avg=avg/(float)stu;
    printf("Average Weight:%f",avg);
    int new;
    scanf("%d",&new);
    int n_w[stu+1];
    for(int i=0;i<stu+1;i++)
    {
        if(i!=stu)
        {
            n_w[i]=w[i];
        }
        else
        {
            n_w[i]=new;
        }
    }
    for(int i=0;i<stu+1;i++)
    {
        avg+=n_w[i];
    }
    avg/=(float)stu+1;
    printf("New average:%f",avg);
    return 0;
}
