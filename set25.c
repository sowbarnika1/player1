int main()
{
    char a[100],s[100];
    int i,j=0,l,c=0,m,p=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        if(a[i]!='0')
        {
        s[j]=c;
        j++;
        }
    }
    m=s[0];
    for(i=0;i<j;i++)
    {
        if(s[i]<m)
        {
            m=s[i];
        p=i;
        }
    }
    printf("%c",a[p]);

    return 0;
}
