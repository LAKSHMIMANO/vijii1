#include <stdio.h>

int main()
{
    char b[10],a[10],i,j,c1=0,c=0;
    printf("enter the string");
    scanf("%s %s",b,a);
    for(i=0;b[i]!='\0';i++)
    {
        c++;
    }
    for(j=0;a[j]!='\0';j++)
    {
        c1++;
    }
    if(c-1!=c1-1)
    {
        printf("yes");
    
    }
    else
    {
        printf("no");
    }
    return 0;
}
