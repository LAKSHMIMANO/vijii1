#include <stdio.h>

int main()
{

int i,j,temp,k,count=0,m=0,n=0;
char a[10],b[100];
scanf("%s",a);
scanf("%d",&k);

for(i=0;a[i]!='\0';i++)
{
    m++;
}

for(i=m-k;i<m;i++)
{
  printf("%c",a[i]);
}   

for(i=0;i<m-k;i++)
{
  printf("%c",a[i]);
}
    return 0;
}
