# include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,c=0,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c++;
        }
    }
    if(n==c)

    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
