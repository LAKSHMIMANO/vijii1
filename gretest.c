#include<stdio.h>
int main()
{
  
  int n1,n2,num,den,rem,gcd;
  scanf("%d,%d",&n1,&n2);
  if(n1>n2)
  {
    num=n1;
    den=n2;
  }
  if(n1<n2)
  {
    den=n1;
    num=n2;
  }
  rem=num%den;
  while(rem)
  {
    num=den;
    den=rem;
    rem=num%den;

  }
  gcd=den;
  printf("%d",gcd);
	return 0;
}
