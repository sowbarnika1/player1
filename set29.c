#include <stdio.h>

int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(i==2)
            {
                printf("%d ",i);
            }
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                printf("%d ",i);
            }
        }
        
    }

    return 0;
}
