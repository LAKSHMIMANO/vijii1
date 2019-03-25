#include <stdio.h>

int main()
{
    int n1,n2,r,r1,p=1,p1=1,pro,r2,c=0,bin=0,bin1=0;
    scanf("%d %d",&n1,&n2);
    while(n1)
    {
        r=n1%2;
        bin=bin+r*p;
        n1=n1/2;
        p=p*10;
    }
    while(n2)
    {
        r1=n2%2;
        bin1=bin1+r1*p1;
        n2=n2/2;
        p1=p1*10;
    }
    pro=bin*bin1;
while(pro)
{
    r2=pro%10;
    pro=pro/10;
    if(r2==1)
    {
        c++;
    }
}
printf("%d",c);
    return 0;
}
