#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,n,l,m,c=0;
    scanf("%s %s",a,b);
    scanf("%d",&n);
    l=strlen(a);
    m=strlen(b);
    if(l==m)
    {
    for(i=0;i<l;i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    return 0;
}
