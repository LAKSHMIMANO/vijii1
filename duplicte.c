#include <stdio.h>
int main() 
{
	int a[10],i,j,c=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}	
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
{
  if(a[i]==a[j])
  {
    c++;
  }
}
}
printf("%d",c);
return 0;
}
