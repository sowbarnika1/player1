#include<stdio.h>
int main()
{
    int n,i,j,a[100],k,c=1;
    scanf("%d",&n);
    scanf("%d",&k);
    if(1<=n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
            if(a[i]==a[j])
            {
                c++;
            }
            }
            if(c==k)
            {
                printf("%d",a[i]);
                break;
            }
            c=1;
        }
    
    }
    return 0;
}
