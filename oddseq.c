#include<stdio.h>
int main()
{
    int n,k,t=1,a[100],odd,i,pos;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(t<k)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                odd=a[i];
                pos=i;
            }
            else
            {
                a[pos]=0;
            }
        }
        t++;
    }
        if(t==k)
        {
        printf("%d",odd);
        }
    return 0;
}
