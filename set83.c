#include<stdio.h>
int main()
{
    long int n,a[100],i,k,c=1;
    scanf("%ld",&n);
    scanf("%ld",&k);
    if(n<=100000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]-a[i+1]==1 ||a[i]-a[i+1]==-1 )
        {
            c++;
        }
    }
    if(c==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                printf("%ld",i+1);
            }
        }
    }
    else
    {
        printf("not valid");
    }
    }
    return 0;
}
