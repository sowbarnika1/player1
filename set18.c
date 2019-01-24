int main()
{
    char a[20];
    int i,c=0,n=1;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            n++;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    if(a[0]>='a' && a[0]<='z')
        {
            a[0]=a[0]-32;
        }
    
    for(i=0;a[i]!='\0';i++)
    {
    
        if(a[i]==' ')
        {
            if(a[i+1]>='a' && a[i+1]<='z')
            {
              a[i+1]=a[i+1]-32;  
            }
        }
         if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        
    }
    puts(a);
    return 0;
}
