#include <stdio.h>
int main()
{
int L,R,i;
scanf("%d %d",&L,&R);
if((L>=1&&L<=100000)&&(R>=1&&R<=100000))
{

for(i=1;;i++)
{
    if(i%L==0&&i%R==0)
    {
        
        printf("%d",i);
        break;
    }
    
}
}
return 0;
}
