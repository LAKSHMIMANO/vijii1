#include<stdio.h>
int main()
{
  char b[20];
  int i;
  scanf("%[^\n]s",b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='a')
        {
            b[i]=b[i]-32;
        }
        else
        {
            b[i]=b[i]+32;
        }
    }
    printf("%s",b);

    return 0;
}
  
