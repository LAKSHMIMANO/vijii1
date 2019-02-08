#include<stdio.h>
int main()
{

char str[10];
int flag=0,i=0;
printf("enter the string");
scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]=='a' ||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='E')
flag=1;
i++;
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
