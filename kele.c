#include <stdio.h>

int main()
{
     int  b[10],k,i,n,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==k)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
  return 0;
}
