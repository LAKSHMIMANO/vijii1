#include<stdio.h>
int main()
{
    int a,b,m=1,n=1,t,k;
    scanf("%d %d",&a,&b);
    while(a>0)
    {
        m=m*a;
        a--;
    }
    while(b>0)
    {
        n=n*b;
        b--;
    }
k=m/n;
    printf("%d",k);
    return 0;
    }
