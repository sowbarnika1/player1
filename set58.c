#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(1<=n<=1000)
    {
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }
    }
    return 0;
}
