#include <stdio.h>

int main()
{
    
    int i,n,a[100],count=0,j;
    printf("enter the no");
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
                count++;
                break;
            }
            
        }
     
    
    if(count==0)
    {
        printf("%d",a);
    }
    
}
    return 0;
}
