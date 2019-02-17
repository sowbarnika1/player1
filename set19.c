int main()
{
    int a,b,i,flag=0,c=0;
    scanf("%d %d",&a,&b);
    if((a>=1 && a<=100000)||(b>=1 && b<=100000))
    {
        for(i=a;i<=b;i++)
        {
            flag=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                flag=1;
                }
                
            }
            if(flag!=1)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
