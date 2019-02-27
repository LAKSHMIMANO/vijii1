#include <stdio.h>

int main()
{
    char a[100];
    int i,n,c=0,count1=0,j;
    printf("enter the string");
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
        c++;
    }
    if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
    {
    count1++;
    }
    }
    if(count1==1)
    {
    printf("%d",count1);
    }

    return 0;
}
