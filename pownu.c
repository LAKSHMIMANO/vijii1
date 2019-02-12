#include <stdio.h>

int main(void) 
{
	int n,k,i,t=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		t=t*n;	
	}
	printf("%d",t);
	return 0;
}
