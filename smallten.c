#include <stdio.h>
int main(void)
{
int a[10],i,min;
printf("enter the ten numbers");

for(i=0;i<10;i++)
{
  printf("%d",a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(min<a[i])
{
min=a[i];
}
}
printf("%d",min);
return 0;
}

