#include <stdio.h>

int main()
{
     char b[10];
     int i,n;
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%c",b[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
    printf("%c",b[i+3]);
    }
    }
  return 0;
}

