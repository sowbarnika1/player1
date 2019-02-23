#include <stdio.h>
int main()
{
    char a[100];
    int c=0,n=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            c++;
        }
        else if(a[i]==')')
        {
            c--;
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
