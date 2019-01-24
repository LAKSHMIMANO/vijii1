#include <stdio.h>
#include <conio.h>

void main()
{
char a[7],b[7];
int count=0,j=0,i;

    printf("enter the string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        b[j]=a[i];
    j++;
    }
    printf("%s",b);
getch();
}
