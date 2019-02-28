#include <stdio.h>

int main()
{
    char m[10],n[10];
    int c=0,i,k;
    scanf("%[^\n]s",m);
    for(i=0;m[i]!='\0';i++)
    {
        if(m[i]==' ')
        {
            
        }
        else
        {
            n[c]=m[i];
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%c",n[i]);
    }
    

    return 0;
}
