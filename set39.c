#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    if(a<=b<=100000)
    {
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<b;j++)
        {
            if(i==pow(j,2))
            {
                c++;
            }
        }
    }
    printf("%d",c);
    }
    return 0;
}
