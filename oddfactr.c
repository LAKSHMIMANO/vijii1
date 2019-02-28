#include <stdio.h>

int main(void) 
{
 int a,i,n,rem;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   rem=n%i;
   if(rem==0)
   {
     printf("%d",i);
   }
 }
  return 0;
}
