int main()
{
    char a[50],b[50];
    int c=0,i,j=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
      b[j]=a[i];
      j++;
    }
    b[j]='.';
    puts(b);

    return 0;
}
