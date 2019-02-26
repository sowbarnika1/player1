#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100];
    scanf("%d",&n);
    if(1<=n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    printf("%d ",a[j]);
                    break;
                }
            }
        }
    }
    return 0;
}
