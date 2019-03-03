#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n-1;i++)
    {
        t=t^a[i+1];
    }
    printf("%d",t);
    return 0;
}
