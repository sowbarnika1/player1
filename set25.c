/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],s[100];
    int i,j=0,l,c=0,m;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        printf("%d",c);
        s[j]=c;
        j++;
    }
    m=s[0];
    for(i=0;i<j;i++)
    {
        if(s[i]<m)
        {
            m=s[i];
        }
    }
    printf("%c",a[m]);

    return 0;
}
