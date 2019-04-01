#include <stdio.h>

int main()
{
    int n,i,j,a[100],b[100],k,t,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    k=0;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
        b[k]=a[i];
        k++;
        
        }
    }
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]<b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}

 return 0;
}
