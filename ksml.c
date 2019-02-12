#include <stdio.h>

int main(void) {
  int min,t,a[10],k,i,j,n;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n+1-k;i++)
  {
   min=0;
    for(j=0;j<n;j++)
    {
      if(min<a[j])
      {
       min=a[j];
       t=j;
      }
    }
    a[t]=0;
}
    printf("%d",min);
  
  return 0;
}
