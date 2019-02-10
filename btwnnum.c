#include <stdio.h>
#include <string.h>

int main(void) {
  int a,b,c;
  printf("enter the number");
  scanf("%d",&a);
  printf("enter the left and right numbers");
  scanf("%d %d",&b,&c);
  if(a>b&&a<c)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
	return 0;
}

  
