int main()
{
    long int n,a[100],i,j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                break;
            }
        }
        if(j==n && a[i]!='\0')
        {
            printf("%ld ",a[i]);
        }
    }
    return 0;
}
