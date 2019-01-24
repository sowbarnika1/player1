int main()
{
    char a[20];
    int i,c=0,t;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    //if(c%2==0)
    {
       for(i=0;i<c;i++)
       {
           if(i%2==0)
           {
           t=a[i];
           a[i]=a[i+1];
           a[i+1]=t;
            }
       }
    }
    puts(a);
    return 0;
}
