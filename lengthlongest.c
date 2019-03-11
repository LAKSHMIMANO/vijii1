#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,a[100],i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=1;i<k;i++)
        j=0;
        {
            a[i+1]=a[j];
            j++;
            
        }
        printf("%d",a[i]);
        return 0;
}
