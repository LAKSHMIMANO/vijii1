#include <stdio.h>

int main()
{
    int n,a[100000],i,b[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            k=0;
          if(i%2==0)
          {
        b[k]=a[i];
        k++;
          }
    }
          for(i=0;i<k;i++)
          {
printf("%d",a[i]);
            }
  
    return 0;
}
