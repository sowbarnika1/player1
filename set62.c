#include <stdio.h>
int main()
{
    long int n,i,k,a[100],j,t;
    scanf("%ld %ld",&n,&k);
    if(1<= n<= 100000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<k;i++)
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
    printf("%ld",a[k-1]);
    }
return 0;
}
