#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,l;
    for(i=0;i<100;i++)
    {
        a[i]='\0';
    }
    scanf("%s",a);
    l=strlen(a);
    n=0;
    for(i=0;i<l;i++)
    {
        printf("%c",a[n]);
        while(n<l)
        {
        n=n+3;
        if(n>l)
            {
                break;
            }
        else
            {
            printf("%c",a[n]);
            }
        }
    }
    return 0;
}
