#include <stdio.h>
 
int main(void) 
{
	char m[50],p;
	int i,j,count=1,max=1;
	scanf("%[^\n]s",m);
	for(i=0;m[i]!='\0';i++)
	{
		for(j=i+1;m[j]!='\0';j++)
		if(m[i]==m[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				p=m[i];
			}
		}
 
	}
	printf("\n%c",p);
	return 0;
}
