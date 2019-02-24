#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
        if(a[0][0]==1)
            {
                c++;
            }
            if(a[0][n-1]==1)
            {
                c++;
            }
            if(a[n-1][0]==1)
            {
                c++;
            }
            if(a[n-1][n-1]==1)
            {
                c++;
            }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i][j]==1)
            {
                if(a[i-1][j]==0 && a[i][j+1]==0 && a[i+1][j]==0 && a[i][j-1]==0)
                {
                    c++;
                }
            }
        }
    }
        
printf("%d",c);
            return 0;
}
