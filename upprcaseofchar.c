#include <stdio.h>
int main()
{
    char b[100];
    int i,j,k;
    scanf("%s %d",b,&k);
    for(i=(k-1);b[i]!='\0';i+=k)
    {
      if(b[i]>='a'&&b[i]<='z')
      {
        b[i]=b[i]-32;
      }
    }
        printf("%s",b);
    
}
