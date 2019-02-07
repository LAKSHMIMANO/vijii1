#include <stdio.h>

int main() 
{
  int n,i;
  char str[10];
  printf("enter the string");
  scanf("%s",str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
  if(str[i]>='0' && str[i]<='9')
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  }
  
  return 0;
}
