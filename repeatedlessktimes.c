#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,k,m=0,temp,b[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
                c++;
            }
        }
            if(c>=k)
            {
            a[i]='$';
            }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        {
            b[m]=a[i];
            m++;
        }
        }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        printf("%d ",b[i]);
    }
    return 0;
  }
