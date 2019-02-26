#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    if(1<=n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<n)
            {
                printf("%d ",a[i]);
            }
        }
    
    }
    return 0;
}
