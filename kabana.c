#include<stdio.h>
int main()
{
    char a[100], b[100]={'k','a','b','a','l','i'};
    int n,i,j,k,count=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;b[j]!='\0';j++)
        {
            for(k=0;a[k]!='\0';k++)
            {
                if(b[j]==a[k])
                {
                    a[k]='$';
                    count++;
                break;
                }}
                if(count%6==0)
                {
                m++;}
            }
}
printf("%d",m);
return 0;
}
