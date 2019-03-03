#include<stdio.h>
int main()
{
    long int n,k,f=1,f1=1,i;
    float t;
    scanf("%ld %ld",&n,&k);
    if(k<=n && k<=10)
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        for(i=1;i<=(n-k);i++)
        {
            f1=f1*i;
        }
        t=f/f1;
        printf("%.0f",t);
        
    }
    return 0;
}
