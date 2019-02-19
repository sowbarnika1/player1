int main()
{
  int n,t=0,m=1,rem,i=2;
  scanf("%d",&n);
  while(n>0)
  {
      rem=n%10;
    
      while(i>0)
      {
          m=m*rem;
          i--;
      }
      t=t+m;
      n=n/10;
      m=1;
  }
  printf("%d",t);
  return 0;
 }
