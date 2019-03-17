#include <stdio.h>
int main()
{
int i,j,temp,count=0,m=0,n=0;
char a[10],b[100];
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
{
    m++;
}
for(i=0;b[i]!='\0';i++)
{
    n++;
    
}
for(i=m-n+1;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
           count++; 
        }
    }
}

if(count==n)
printf("yes");
else
printf("no");
return 0;
}
