#include<stdio.h>
int main()
{
  char a[100],b[100];
   int pos,temp=0,i,j,count1=0,c=0;
    scanf("%s %c",a,b);
    for(i=1;a[i]!='\0';i++)
    {
        c++;
    }
    j=0;
    for(i=1;i<=c;i++)
    {
        if(a[i]==b[j])
        {
            count1++;
        }
    }
    printf("%d",count1);
    

    return 0;
}
