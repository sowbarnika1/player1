#include<stdio.h>
int main()
{
    long int n,k,c=0,rem;
    scanf("%ld %ld",&n,&k);
    if((n>=1 && n<=100000) && (k>=0 && k<=9))
    {
    while(n>0)
    {
        rem=n%10;
        if(rem==k)
        {
            c++;
        }
        n=n/10;
    }
    printf("%ld",c);
    }
    return 0;
}
