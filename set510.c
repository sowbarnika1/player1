#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    if(1<=n<=100000)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
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
    else{
        printf("no");
    }
    }
    return 0;
}
