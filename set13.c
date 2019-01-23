int main()
{
int n,rem,rev=0;
scanf("%d",&n);
while(n)
{
    rem=n%10;
    rev=rem+rev*10;
    n=n/10;
}
printf("%d",rev);
    return 0;
}
