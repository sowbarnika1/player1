#include<stdio.h>
int main()
{
    long int n,j,i,k;
    long int a[100];
    scanf("%ld",&n);
    scanf("%ld",&k);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=n;i>=(n-k);i--)
        {
               a[i]='\0';
        }
for(i=0;i<n;i++)
{
    if(a[i]!='\0')
    {
        printf("%ld ",a[i]);
    }
}
}
    return 0;
}
