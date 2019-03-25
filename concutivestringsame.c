#include <stdio.h>
#include<conio.h>
int main()
{
    char a[100];
    int n,i,j,count=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
        
        
            if(a[i]==a[j])
            {
                count++;
            }
        }
        
        if(count==k)
        {
            printf("yes");
            break;
        }
                   
    }
    if(count!=k)
    {
        printf("no");
    }

    return 0;
}
