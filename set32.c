#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,t,g;
    scanf("%d %d",&n,&k);
    if(n>k)
    {
        t=n;
    }
    else
    {
        t=k;
    }
    for(i=1;i<=t;i++)
    {
     if(n%i==0 && k%i==0)
     {
         g=i;
     }
    }
    printf("%d",g);
        return 0;
    }
    
