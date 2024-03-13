#include<math.h>
#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    scanf("%d",&arr[i]);
    int e1,e2;
    scanf("%d%d",&e1,&e2);
    int n_arr[s];
    int k=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]!=e1 && arr[i]!=e2)
        {
            n_arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",n_arr[i]);
    }
}
