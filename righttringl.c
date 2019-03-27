#include <stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    a=a*a;
    b=b*b;
    d=d*d;
    if((a==b+d)||(b==d+a)||(d==a+b))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
