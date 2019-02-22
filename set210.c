#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i,j;
    scanf("%s",a);
    l=strlen(a);
    if(l>=1 && l<=100000)
    {
        for(i=0;i<l;i++)
        {
            if(a[i]=='x')
            {
                a[i]='a';
            }
            else if(a[i]=='y')
            {
                a[i]='b';
            }
            else if(a[i]=='z')
            {
                a[i]='c';
            }
            if(a[i]=='X')
            {
                a[i]='A';
            }
            else if(a[i]=='Y')
            {
                a[i]='B';
            }
            else if(a[i]=='Z')
            {
                a[i]='C';
            }
            else
            {
                a[i]=a[i]+3;
            }
        }
        printf("%s",a);
        
        }
        return 0;
    }
    
