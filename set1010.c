#include<stdio.h>
int main()
{
    long int n;
    long int hex=0,rem,p=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        hex=oct+rem*p;
        p=p*2;
        n=n/10;
    }
    printf("%lx",hex);
    
}
