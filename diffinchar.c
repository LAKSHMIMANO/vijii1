#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,count=0;
    scanf("%s %s",a,b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        
            if(a[i]!=b[i])
            {
                count++;
            }
        
    }
    if(count==k)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    return 0;
}
