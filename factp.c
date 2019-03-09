#include <stdio.h>

int main(void) {
  int n,fact=1,i;
  printf("enter the number");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    fact=fact*i;
  }
  printf("%d",fact);
  return 0;
}
