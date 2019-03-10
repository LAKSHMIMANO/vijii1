#include<stdio.h>
int main()
{
  int i,j,c=0,flag=0;
  char a[100],b[100];
  scanf("%s %s",a,b);
  for(i=0;a[i]!='\0';i++)
  {
    c++;
  }
  j=0;
  if(a[i]==b[j])
  {
    flag++;
    j++;
  }
  if(flag==c)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  
  return 0;
}
