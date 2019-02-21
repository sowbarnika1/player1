#include<stdio.h>
#include<string.h>
struct anagram
{
    char a[100];
    
}s;

int main()
{
    struct anagram s[100];
    char k[6]="kabali";
    int i,j,l,n,c=0,v=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].a);
    }
     for(i=0;i<n;i++)
    {
        l=strlen(s[i].a);
        c=0;
        for(j=0;j<6;j++)
        {
            for(f=0;f<l;f++)
           
        {
            if(k[j]==s[i].a[f])
            {
                c++;
                s[i].a[f]='\0';
                break;
            }
        }
        }
        if(c==6)
        {
            v++;
        }
    }
    printf("\n%d",v);
    return 0;
}
