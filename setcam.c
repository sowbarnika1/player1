int main()
{
    char a[1000000];
    int i,c;
    gets(a);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i];
        }
    }
    if(a[0]>='a' && a[0]<='z')
        {
            a[0]=a[0]-32;
        }
        else
        {
            a[0]=a[0];
        }
    for(i=0;i<c;i++)
    {
        
        if(a[i]==' ')
        {
            if(a[i+1]>='a' && a[i+1]<='z')
            {
                a[i+1]=a[i+1]-32;
            }
            else
            {
                a[i+1]=a[i+1];
            }
        }
    }

puts(a);
return 0;
}
