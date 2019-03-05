#include<stdio.h>

int main()
{
    char b[100];
    int i,c=0,c1=0;
    printf("enter the string");
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
      if(b[i]=='(')
    {
      c++;
    }
    if(b[i]==')')
    {
      c1++;
    }
    }
    
      if(c==c1)
      {
printf("yes");
      }
      else
      {
        printf("no");
      }
      return 0;
    }
