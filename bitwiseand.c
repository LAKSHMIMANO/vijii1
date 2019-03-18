#include <stdio.h>
int main()
{
    char b[100];
    int a[90],i,j,n,count=0,max=-1,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
        {
            m=(a[i]&a[j]);
            if(m>max)
            {
              max=m;
            }
        
    }
    }
    printf("%d",max);
    
    return 0;
}
