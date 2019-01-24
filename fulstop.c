#include <stdio.h>
#include <conio.h>

void main()
{
char a[4];
int i,count=0;

    printf("enter the string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    
    a[count]='.';
    printf("%s",a);
getch();
}
