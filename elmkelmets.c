#include <stdio.h>

int main(void) {
  int a,b,m[100],fact=1,i;
  printf("enter the number");
  scanf("%d %d",&a,&b);
  for(i=0;i<a;i++)
  {
    scanf("%d",&m[i]);
  }
  for(i=0;i<a-b;i++)
  {
  printf("%d",m[i]);
  }
  return 0;
}
