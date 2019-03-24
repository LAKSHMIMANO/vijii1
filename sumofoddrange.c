#include <stdio.h>

int main()
{
    int sum=0,l,r,i;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);

    return 0;
}
