#include<stdio.h>
int main()
{
    long int n,j,i,c=0,m[100],k=0,max;
    long int a[100];
    scanf("%ld",&n);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            c=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
            m[k]=c;
            k++;
        }
        max=m[0];
        for(i=0;i<k;i++)
        {
            if(max<m[i])
            {
                max=m[i];
            }
        }
        printf("%d ",max);
    }
    return 0;
}
