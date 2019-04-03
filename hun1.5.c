#include <stdio.h>

int main()
{
   int n,a[100000],i,j,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
           scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
           for(j=i+1;j<2;j++)
           {
                   if(a[i]==a[j])
                   {
                           c++;
                   }
                   
                   
           }
   }
  
if(c==1)
{
        printf("%d",a[i]);
}
else
{
        printf("unique");
}

    return 0;
}
