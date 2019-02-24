#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
    return 0;
}
