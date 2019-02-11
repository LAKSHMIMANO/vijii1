#include <stdio.h>
#include <string.h>
int main(void) 
{
      int n,k,c=0,a[50],i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     if (a[i]==k)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;

	return 0;
}
  
