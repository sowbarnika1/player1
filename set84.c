#include<stdio.h>
int main()
{
    long int a,b,i,m=1;
    scanf("%ld",&a);
    scanf("%ld",&b);
   if((1>=a && a<=5) && (1>=b && b<=50))
   {
       for(i=1;i<=b;i++)
       {
           m=m*a;
       }
       printf("%ld",m);
   }
    return 0;
}
