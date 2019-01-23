#include <stdio.h>
#include <conio.h>

void main()
{
    int n,rem,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
        }
        printf("%d",temp);
    getch();
}
