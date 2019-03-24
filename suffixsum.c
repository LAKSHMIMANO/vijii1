#include<stdio.h>
void main()
{
    int n,a[1000],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    j=sum;
    for(i=n;i>0;i--)
    {
       j=j-a[i];
       printf("%d ",j);
    }
}
