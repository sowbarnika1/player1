#include<stdio.h>
#include<string.h>
int main()
{
    long int k,n,c=0,s=0,rem,t;
    scanf(" %ld %ld",&n,&k);
    t=n;
    while(t)
    {
        t=t/10;
        s++;
    }
    while(n)
    {
        rem=n%10;
        if(rem>=0 && rem<=k)
        {
            c++;
        }
        n=n/10;
    }
    if(c==s)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
