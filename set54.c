#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,l,n,t;
    for(i=0;i<100;i++)
    {
        b[i]='\0';
    }
    scanf("%s",a);
    scanf("%d",&n);
    l=strlen(a);
    if(1<= l && n<= 100000)
    {
        for(i=l-n;i<l;i++)
        {
            b[j]=a[i];
            j++;
        }
        for(i=0;i<l-n;i++)
        {
            b[j]=a[i];
            j++;
        }
        printf("%s",b);
    }
    
        return 0;
    }
    
