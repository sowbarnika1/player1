#include<stdio.h>
int main()
{
    long int n,a[1000],i,j,c=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c++;
            }
        }
    }
    printf("%ld",c);
    return 0;
}
