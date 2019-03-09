#include <stdio.h>

int main(void) {
  int a,b,m[100],fact=1,i,c=0;
  printf("enter the number");
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    scanf("%d",&m[i]);
  }
  for(i=0;i<a-1;i++)
  {
  if(m[i]>m[i-1]&&m[i]>m[i+1])
  {
    
printf("%d",m[i]);
  }
  }
  return 0;
}
