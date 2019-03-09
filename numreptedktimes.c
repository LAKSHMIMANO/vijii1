#include <stdio.h>

int main(void) {
  int a,b,m[100],fact=1,i,c=0;
  printf("enter the number");
  scanf("%d %d",&a,&b);
  for(i=0;i<a;i++)
  {
    scanf("%d",&m[i]);
  }
  for(i=0;i<a;i++)
  {
  if(m[i]==b)
  {
    c++;
  }
  }
  
  printf("%d",c);
  
  return 0;
}
