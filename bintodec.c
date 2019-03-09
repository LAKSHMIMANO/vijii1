#include<stdio.h>
int main()
{
  int n,bin=0,dec=0,r,pow=1;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
{
  r=n%10;
  dec=r*pow+dec;
  n=n/10;
  pow=pow*2;
}
printf("%d",dec);
}
