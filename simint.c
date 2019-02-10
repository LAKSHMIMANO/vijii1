#include <stdio.h>

int main(void) {
  int n,p,r,si;
  printf("enter the number");
  scanf("%d %d %d",&n,&p,&r);
  si=p*n*r/100;
  printf("%d",si);
  return 0;
}
