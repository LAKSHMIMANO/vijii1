#include <stdio.h>
#include <string.h>

int main(void) {
  int n,a,pro=1;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		pro=pro*a;
		n=n/10;
	}
	printf("%d",pro);
	return 0;
}

  
