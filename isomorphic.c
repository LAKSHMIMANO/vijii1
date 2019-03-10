#include<stdio.h>
int main()
{
  char m[199],n[199];
  int a,b,i,j,c=0,c1=0,u,v,w,x,y,z,flag=0;
  printf("enter the number");
  scanf("%s %s",m,n);
  for(i=0;m[i]!='\0';i++)
  {
    c++;
  }
  for(i=0;n[i]!='\0';i++)
  {
    c1++;
  }
if(c==c1)
{
  for(i=0;i<c;i++)
	{
		for(j=i+1;j<c1;j++)
		{
			u=m[i];
			v=m[j];
			w=n[i];
			x=n[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

  
