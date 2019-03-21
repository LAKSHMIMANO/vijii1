#include <stdio.h>

int main()
{
    int n,k,i,res,c=1,l=1,j=1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    for(i=1;i<=(n-k);i++)
    {
        l=l*i;
    }
    for(i=1;i<=k;i++)
    {
        j=j*i;
    }
    res=c/(l*j);
    printf("%d",res);
    

    return 0;
}
