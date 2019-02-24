#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0,j,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        
     if(c==1 && a[i]!=' ')
        {
            printf("%c",a[i]);
        }
    }
      return 0;
    }
