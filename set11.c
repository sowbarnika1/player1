int main()
{
    char a[50],b[50];
    int i,j=0,k=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
for(i=k-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
puts(b);
    return 0;
}
