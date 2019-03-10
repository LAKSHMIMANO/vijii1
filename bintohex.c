#include<stdio.h>
int main()
{
    long int n,rem,hex=0,pow=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        hex=hex+rem*pow;
        n=n/10;
        pow=pow*2;
        
    }
    printf("%lX",hex);
    return 0;
}
