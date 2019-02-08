#include<stdio.h>
int main()
{
int n,rev=0,temp;
char a;
printf("enter the string");
scanf("%s",a);
temp=a;
while(temp!='\0')
{
  rev=rev*10;
  rev=rev+temp%10;
  temp=temp/10;
}
if(a==rev)
{
  printf("yes");
}
else
{
  printf("no");
}

return 0;
}
