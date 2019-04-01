#include <stdio.h>

int main()
{
    int n,a[100],i,j,b[100],t;
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
                b[j]=a[i];
            }
            if(a[i]>b[j])
            {
                t=a[i];
                a[i]=b[j];
                b[j]=t;
                
            }
            
        }}
        printf("%d",b[j]);
    
    
    return 0;
}
