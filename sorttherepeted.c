#include <stdio.h>

int main()
{
    int a[10],i,j,n,c=0,t,b[10],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            b[k]=a[i];
            k++;
        }
    }
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
              if(b[i]>b[j])
              {
                  t=b[i];
                  b[i]=b[j];
                  b[j]=t;
              }
            }
        }
        for(i=0;i<k;i++)
        {
            printf("%d ",b[i]);
        }
    

    return 0;
}
