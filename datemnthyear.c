int main()
{
    char a[100];
    int c=0,i,f=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    if(a[0]<'4' && a[1]<'10' && a[2]=='/' && a[3]<'2' &&a[4]<'3' && a[5]=='/'&&a[6]<'10' &&a[7]<'10' &&a[8]<'10' &&a[9]<'10')
    {
        f=1;
    }
    else
    {
        f=0;
    }
if(f==0)
{
    printf("no");
}
else
{
    printf("yes");
}

    return 0;
}
