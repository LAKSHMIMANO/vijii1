#include <stdio.h>

int main()
{
    int n,k,i,res,c=1,l=1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    for(i=1;i<=(n-k);i++)
    {
        l=l*i;
    }
    res=(c/l);
    printf("%d",res);
    

    return 0;
}
