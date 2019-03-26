#include <stdio.h>

int main()
{
    int n,a[100],i,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            sum=sum+a[i];
        }
        else
        {
            sum=sum+a[i+1];
        }
    }
    printf("%d",sum);

    return 0;
}
