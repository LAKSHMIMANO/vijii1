#include<stdio.h>

int main()
{
    int n,a[100],i;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("%d ",a[i+1]);
        }
    }
    return 0;
}
