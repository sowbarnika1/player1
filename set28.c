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
    int i,j,l,n,c=0,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].a);
    }
     for(i=0;i<n;i++)
    {
        l=strlen(s[i].a);
        c=0;
        for(j=0;j<l;j++)
        {
            if(s[i].a[j]==k[j])
            {
                c++;
                s[i].a[j]='$';
            }
        }
        //printf("%d ", c);
        if(c==l)
        {
            v++;
        }
    }
    printf("%d",v);
    return 0;
}
    
