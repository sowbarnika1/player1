#include<stdio.h>
int main()
{
    long int n,a[1000],i,j,d,max;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            d=a[i]-a[j];
            if(max>d)
            {
                max=d;
            }
        }
    }
    if(max<0)
    {
        max=-max;
    }
    else
    {
        max=max;
    }
        printf("%ld ",max);
    
    return 0;
}
