#include <stdio.h>
	
	int main()
	{
	    int n,k,a[100],i,min,temp=1,pos;
      
      printf("enter the number");
      scanf("%d %d",&n,&k);
      k=n+1-k;
      while(temp<=k)
      {
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      min=a[0];
      
        for(i=1;i<n;i++)
        {
      
      if(min<a[i])
      {
        min=a[i];
        pos=i;
      }
      }
      if(temp==k)
      {
        printf("%d",min);
      }
      else
      {
        a[pos]=0;
      }
      temp++;
  }

	    return 0;
}
