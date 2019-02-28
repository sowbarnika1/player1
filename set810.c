#include<stdio.h>
int main()
{
    long int n,a[1000],i,j,d,t;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
        }
    }
        d=a[1]-a[0];
        printf("%ld",d);
    
    return 0;
}
