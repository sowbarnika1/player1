#include<stdio.h>
void main()
{
int n,a[100000],b[1000000],i,j,t;
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i]==b[j])
        {
        printf("%d ",j+1);
        }
        }
    }
    return 0;
}
