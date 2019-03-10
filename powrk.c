#include<stdio.h>
int main()
{
  int a,b,k,flag=0;
  char m[100],n[100];
 
    printf("enter the number");
    scanf("%d %d",&a,&k);
    b=a;
    while(b>1)
    {
        if(b%k!=0)
        {
            flag=1;
            break;
        }
        b=b/k;
    }
if(flag==0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
