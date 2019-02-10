#include <stdio.h>


int main(void) 
{
    
    int n ,count = 0;

    printf("Enter an integer ");
    scanf("%d", &n);

    while(n != 0)
    {

       n= n / 10;
      count++;
    }

    printf(" %d", count);
    return 0;
}
