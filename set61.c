#include <stdio.h>
int main()
{
    int n,i,a[100],j,t;
    scanf("%d",&n);
    if(1<= n<= 100000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
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
    printf("%d",a[1]);
    }
return 0;
}
