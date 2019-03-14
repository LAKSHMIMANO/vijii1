#include<stdio.h>

int main()
{
   int n,i,count=0,j;
   
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=n;j++)
       {
       if((i*1)+(j*2)==n)
       {
           count++;
       }
       }
   }
   printf("%d",count);
   return 0;
}
