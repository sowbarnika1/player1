#include<stdio.h>
void main()
{
    int n,k,i,p=1,f=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<n/2;i++)
    {
        p=p*k;
        if(n==p)
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

}
