#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
    printf("%d",~n);
    }
    return 0;
}
