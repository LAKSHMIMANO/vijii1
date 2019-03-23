#include <stdio.h>

int main()
{
    int l,r,i,j,f=0,c;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
        
            }
        }
    if(c==2)
    {
        f++;
    }
}
printf("%d",f);

    return 0;
}
