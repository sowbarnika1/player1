#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,l,m,c=0,j;
    scanf("%s %s",a,b);
    l=strlen(a);
    m=strlen(b);
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]='\0';
            }
        }
    }
    if(c==m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
