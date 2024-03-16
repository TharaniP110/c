#include <stdio.h>
int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    int res[size1+size2];
    int i,j,r;
    while((i<size1)&&(j<size2))
    {
        if((arr1[i]<arr2[j]))
        {
            res[r]=arr1[i];
            i++;
            r++;
        }
        else
        {
            res[r]=arr2[j];
            j++;
            r++;
        }
    }
    int ind;
    while(i<size1)
    {
        res[r]=arr1[i];
        i++;
        r++;
    }
    while(j<size2)
    {
        res[r]=arr2[j];
        j++;
        r++;
    }
    for(ind =0;ind<size1+size2;ind++)
        printf("%d ",res[ind]);
    return 0;
}
