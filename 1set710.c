#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    char b[6]="answer";
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    a[l]=' ';
    l++;
    for(i=0;b[i]!='\0';i++)
    {   
        a[l]=b[i];
        l++;
    }
    puts(a);
    return 0;
}
