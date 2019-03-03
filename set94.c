#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,j,t,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t=a[i]|a[j];
            if(t>max)
            {
                max=t;
            }
            
        }
    }
    printf("%d",max);
    
    return 0;
}
