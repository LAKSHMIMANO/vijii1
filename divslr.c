#include <stdio.h>
 
int main(void) 
{
	
	int n,l,r,i,flag;

	scanf("%d %d",&l,&r);
	if(l>r)
	{
		flag=l;
	}
	else
	{
		flag=r;
	}
	for(i=2;i<=flag;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
