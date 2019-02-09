#include <stdio.h>

int main(void) {

  int sum=0,num,i;
    int b[30];
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    	scanf("%d",&b[i]);
    	sum=sum+b[i];
    }
  printf("%d",sum);
    return 0;
}
