#include<stdio.h>
int main()
{
  int i,j,c=0,flag=0;
  char m[100],n[100];
  scanf("%s %s",m,n);
  for(i=0;m[i]!='\0';i++)
  {
    c++;
  }
  j=0;
  if(m[i]==n[j])
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
