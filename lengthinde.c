#include <stdio.h>

int main()
{
    int a[100],n,i,c=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]<a[i+1])
            {
                c++;
            }
            else
            {
                c1++;
                break;
            }
    }
    printf("%d",c+1);
    

    return 0;
}
