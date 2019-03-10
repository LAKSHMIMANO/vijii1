#include <stdio.h>

int main()
{
    int a[2],b[2],c[2],i,count=0;
	for(i=0;i<2;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&c[i]);
	}

	for(i=0;i<2;i++)
	{
	if((a[i]==b[i] && b[i]==c[i])||(a[i]==a[i+1] && b[i]==b[i+1] && c[i]==c[i+1]))
	{
    count=1;
	}
	}
	if(count==1)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
