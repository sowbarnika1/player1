#include<stdio.h>
int main()
{
    long int a,b,i,m=1;
    scanf("%ld",&a);
    scanf("%ld",&b);
   if((a>=1 && a<=50) && (b>=1 && b<=50))
   {
       for(i=1;i<=b;i++)
       {
           m=m*a;
       }
       printf("%ld",m);
   }
    return 0;
}
