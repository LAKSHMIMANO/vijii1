#include <stdio.h>

int main()
{
    int n,i,sum=0,a[100],res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    
    printf("%d",sum);

    return 0;
}
