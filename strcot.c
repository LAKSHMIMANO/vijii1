#include<stdio.h>
int main()
{
char str[10];
int i,c=0;
printf("enter the string");
gets (str);
for(i=0;str[i]!='\0';i++)
{
  if(str>'a'&& str<'z')
  {
    c++;
  }
}
printf("%d",c);

return 0;
}
