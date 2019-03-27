#include<stdio.h>

int main()
{
    int a,b,i,j,m,c=0,sum;
  
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=i;
        for(j=0;j<m;j++)
        {
            sum=j*j;
            if(sum==m)
            {
                c++;
            }
        }
    }
    printf("%d",c);
  return 0;
}
