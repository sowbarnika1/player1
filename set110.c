int main()
{
    char a[100],b[100];
    int i,l,n,c=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    n=strlen(b);
    if(l==n)
    {
        for(i=0;i<l;i++)
        {
            if(a[i]!=b[i])
            {
                c++;
            }
            
        }
                if(c==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    
    return 0;
}
