#include <stdio.h>
	
	int main()
	{
	    char v[100];
	    int i;
	    scanf("%s",v);
	    for(i=0;v[i]!='\0';i++)
	    {
	        if(i%2==0)
	        {
	            printf("%c",v[i]);
	        }
	    }
	    printf("\n");
	    for(i=0;v[i]!='\0';i++)
	    {
	        if(i%2!=0)
	        {
	            printf("%c",v[i]);
	        }
	    }
	
	    return 0;
	}




