int main()
{
int n,f=1,i;
scanf("%d",&n);
if(n<=20)
{
for(i=1;i<=n;i++)
{
    f=f*i;
}
printf("%d",f);
}
    return 0;
}
