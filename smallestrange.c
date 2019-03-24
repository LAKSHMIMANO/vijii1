#include<stdio.h>
int main()
{
    int a[100],min,n,rem,i,r,j;
    
    scanf("%d %d %d",&n,&i,&r);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    min=a[i-1];
    for(j=i-1;j<=r-1;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    printf("%d",min);
    return 0;
}
