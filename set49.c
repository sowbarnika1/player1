#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n==pow(i,2))
        {
            f=1;
            break;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
