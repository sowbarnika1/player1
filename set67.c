#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char k;
    int i,n=0;
    scanf("%s %c",a,&k);
    for(i=0;a[i]!='\0';i++)
    {
            if(a[i]==k)
            {
            n++;
            }
    }
    printf("%d",n);
        return 0;
}
