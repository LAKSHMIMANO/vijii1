#include <stdio.h>
int main()
{
        int n,i,j,count;
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                count=1;
                for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        count=0;
                    }
                }
            
            if(count==1)
            {
                printf("%d ",i);
            }
        }
        }
    return 0;
}
