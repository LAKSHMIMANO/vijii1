#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b,c=0,rem;
    
    scanf("%d %d",&n,&b);
    if(b>=0&&b<=9)
    {
    while(n>0)
    {
        rem=n%10;
        if(rem==b)
        {
            c++;
        }
        n=n/10;
    }
    }
    printf("%d",c);
    getch();
}
