#include<stdio.h>

int main()
{
    char a[100],i,m=0,c2=0,c1=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]%2==0)
       {
           c1++;
       }
       else
       {
           c2++;
       }
    }
    m=c1*c2;
    printf("%d",m);
    return 0;
}
