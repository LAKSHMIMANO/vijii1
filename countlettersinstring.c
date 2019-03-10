#include<stdio.h>
int main()
{
  int i,c=0;
  char a[100];
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    c++;
  }
  printf("%d",c);
  return 0;
}
