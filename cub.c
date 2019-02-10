#include <stdio.h>

int main(void)
 {
	int l,b,h,volume,tsa;
	scanf("%d %d %d",&l,&b,&h);
	
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("%d",volume);
	printf("%d",tsa);
	return 0;
	
}
