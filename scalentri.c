#include <stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    if((a!=b)&&(b!=d)&&(d!=a))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
  return 0;
}
