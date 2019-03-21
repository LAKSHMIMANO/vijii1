#include<stdio.h>
int main()
{
int a[100],i,j,max=0,c2=0,d,n,t;

    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    d=a[1]-a[0];
    printf("%d",d);
return 0;
}
