#include <stdio.h>
int main() 
{
	int a,b,c,n,m;
	scanf("%d %d %d",&a,&b,&c);
	n=pow(a,b);
	m=n%c;
	printf("%d",m);
	return 0;
}
