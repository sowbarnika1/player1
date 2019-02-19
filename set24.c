int main()
{
   char a[100000],s[100000];
   int i,j=0,l,n;
   scanf("%d",&n);
  scanf("%s",a);
  
   l=strlen(a);
   if(n==l)
   {
       for(i=l-1;i>=0;i--)
    {
        s[j]=a[i];
        j++;
    }
       
       for(i=0;s[i]!='\0';i++)
       {
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       {
           s[i]='\0';
        }
    else
    {
           printf("%c",s[i]);
    }
    
    }
    }
   return 0;
}
