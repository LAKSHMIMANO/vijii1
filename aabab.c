#include<stdio.h>
int main()
{
    char a[100],i,c=0,j;
    
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            c++;
        }
    }
    if(c==j)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    
}
