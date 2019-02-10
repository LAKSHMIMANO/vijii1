#include <stdio.h>

int main(void) {
  int n,j,p,m;
  printf("enter the number");
  scanf("%d %d %d",&n,&p,&j);
  m=(j*p)%n;
  printf("%d",m);
  return 0;
}
