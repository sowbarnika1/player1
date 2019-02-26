#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(1<=n<=100000)
    {
        for(i=1;i<=n;i++)
        {
            
            if(n%i==0)
            {
                int x=n/i;
                if(x%2!=0)
                {
                    printf("%d",i);
                    break;
                }
            }
        }
    }
    return 0;
}
