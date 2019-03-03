#include<stdio.h>
int main()
{
    int a,bin=0,rem,p=1;
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%2;
        bin=bin+rem*p;
        p=p*10;
        a=a/2;
    }
    printf("%d",bin);
    return 0;
}   
