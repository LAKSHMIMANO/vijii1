#include<stdio.h>
int main()
{
    int n,r,i,m=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2!=0)
        {
            m=m+r;
        }
        n=n/10;
    }
    if(m%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
    return 0;
}
