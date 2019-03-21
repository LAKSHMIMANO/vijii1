#include<stdio.h>
int main()
{
int a[100],i,t1,t2,c1=0,c2=0,n;

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
c1++;
t1=a[i];
}
else
{
c2++;
t2=a[i];
}
}
if(c1==1)
{
printf("%d",t1);
}
else
{
printf("%d",t2);
}
return 0;
}
