#include <stdio.h>

int main()
{
   int n,c=0,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i*i==n)
       {
           c++;
           break;
       }
   }
   if(c!=0)
   printf("yes");
   else
   printf("no");

    return 0;
}
