#include <stdio.h>
void main()
{
    char b[100];
    int i,j,k;
    scanf("%s %d",b,&k);
    for(i=(k-1);b[i]!='\0';i+=k)
    {
        printf("%c ",b[i]);
    }
}
