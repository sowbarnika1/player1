#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char k;
    int i;
    scanf("%s %c",a,&k);
    for(i=0;a[i]!='\0';i++)
    {
            if(a[i]==k)
            {
                printf("%d",i+1);
                break;
            }
    }
        return 0;
}
