#include<stdio.h>
int main()
{
    long int n,a[100],i,max,p=0;
    scanf("%ld",&n);
    if(n<=100000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            p=i;
        }
    }
    if(max>a[p+1])
    {
    printf("%ld",max);
    }
    else
    {
        printf("not bitonic array");
    }
    }
    return 0;
}
