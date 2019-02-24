#include <stdio.h>
	
	int main()
	{
	   char a[10];
     int i,n,temp;
    
     printf("enter the string");
     gets(a);
     n=strlen(a);
     if(n%2==0)
{
  for(i=0;i<n;i=i+2)
  {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }


puts (a);
}
else
{
  for(i=0;i<n;i=i+2)
  {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }

puts (a);
}
 return 0;
}
