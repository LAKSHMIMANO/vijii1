#include<stdio.h>
int main()
{
  
    int n,i,j,k,m=0;
    scanf("%d",&n);
  
        for(i=2;i<n;i++)
    {
    m=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
             m++;
            }

        }
        if(m==1)
        {
            if(n%i==0)
            {
                printf("%d ",i);
            }
        }
    }
return 0;
}
