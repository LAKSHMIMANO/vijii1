#include<stdio.h>
int main()
{
  int m,n,o,sum;
  scanf("%d %d %d",&m,&n,&o);
  if(m!=0&&n!=0&&o!=0)
  {
    sum=m+n+o;
    if(sum==180)
    {
      printf("yes");
    
    }
    else
    {
      printf("no");
    }
  }
  else
  {
    printf("no");
  }
  return 0;
}
