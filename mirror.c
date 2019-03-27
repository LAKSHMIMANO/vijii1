#include <stdio.h>
int main()
{
    int l[100],m[100],n,i,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
        scanf("%d",&m[i]);
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(l[i]==m[j])
        {
            f++;
        }
    }
    if(f==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
