#include <stdio.h>

int main()
{
    int a[100],i,j,n,c=0,t,b[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
              if(a[i]<a[j])
              {
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
              }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
            if(c==n)
            {
                printf("%d",a[0]);
            }
            else
            {
        for(i=0;i<n;i++)
        {
          printf("%d",a[i]);
        }
        }
    

    return 0;
}
