#include <stdio.h>

void main()
{
    int n,i,b,a[90],j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j]    = a[j+1];
                a[j+1]  = t;
            }
        }
    }
    
        if(n%2 == 0)
        {
        b = (a[(n-1)/2] + a[n/2])/2.0;
        }
    else
    {
        b= a[n/2];
    
    }
    printf("%d",b);

    getch();
}
