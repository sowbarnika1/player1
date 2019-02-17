int main()
{
    char a[100000],b[100000];
    int i,l,n,c=0,k=0,f=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    n=strlen(b);
    if(l==n)
    {
        for(i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            {
            if(a[i]==a[j])     
            {
             c++;
            }
            if(b[i]==b[j])
            {
                k++;
            }
            if(c==k)
            {
                f=1;
            }
            else
            {
                f=0;
            }

            }
        }
                if(f==1)
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
