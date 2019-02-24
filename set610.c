#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,l,n,f=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    n=strlen(b);
    if(l==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}
