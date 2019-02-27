#include <stdio.h>
#include<string.h>
int main(void) 
{
	char m[30];
	int i,n;
	scanf("%s",m);
	n=strlen(m);
	for(i=0;i<n;i++)
	{
		if(m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' || m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U')
		{
			m[i]='@';
		}
	}
	for(i=n;i>=0;i--)
	{
		if(m[i]!='@')
		{
			printf("%c",m[i]);
		}
	}
 
	return 0;
}
 
