#include<stdio.h>
#include<stdlib.h>
int main()
{
    int stu;
    scanf("%d",&stu);
    int *w;
    w=(int*)calloc(stu,sizeof(int));
    if(w==NULL)
    {
        printf("Memory is not Created");
    }
    for(int i=0;i<stu;i++)
    {
        scanf("%d",&w[i]);
    }
    float avg=0.0,tot=0.0;
    for(int i=0;i<stu;i++)
    {
        tot+=w[i];
    }
    avg=tot/(float)stu;
    printf("Average Weight:%f",avg);
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    stu+=2;
    w=(int*)realloc(w,stu*sizeof(int));
    w[stu-2]=n1;
    w[stu-1]=n2;
     if(w==NULL)
    {
        printf("Memory is not allocated");
    }
    tot=0.0;
    for(int i=0;i<stu;i++)
    {
        tot+=w[i];
        printf("%d ",w[i]);
    }
    avg=tot/((float)stu);
    printf("\nNew average:%f",avg);
    return 0;
}
