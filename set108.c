#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int i,l,c=0,k;
    scanf("%s",&a);
    scanf("%d",&k);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
     if(a[i]>=0 && a[i]<=k)
            {
                c++;
            }
    }
    printf("%d",c);
    if(l==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
