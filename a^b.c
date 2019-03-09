#include <stdio.h>

int main(void) {
  int a,b,m=1,i,c=0;
  printf("enter the number");
  scanf("%d %d",&a,&b);
  for(i=1;i<=b;i++)
  {
  m=m*a;
  }
  
printf("%d",m);
  
  return 0;
}
