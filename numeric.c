#include <stdio.h>
 
int main(void) 
{
  char a[10];
	int i,flag;
	scanf("%s",a);
	for(i=0;a[1]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
    {
      flag=1;
    }
    else
    {
      flag=0;
      break;
    }
	}
  if(flag==0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
	
	return 0;
}
 
