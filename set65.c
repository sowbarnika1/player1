#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,c=0,n=0,j=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        n++;
    }
    if(c==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i] || a[i]==b[i]+32)
            {
                j++;
            }
        }
        if(j==c)
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
