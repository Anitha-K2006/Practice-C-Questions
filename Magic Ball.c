#include<stdio.h>
int main()
{
  long int num,t;
  int n=0;
  scanf("%ld",&num);
  t=num;
  while(t!=0)
  {
    n++;
    t=t/10;
  }
  int a[n],i,j;  
  t=num;
  for(int i=n-1;i>=0;i--)
  {
    a[i]=t%10;
    t=t/10;
  }
  int c=1;
  for(i=0;i<n;)
  {
      if(i!=n-1&&a[i]==a[i+1])
      {
          c++;
          i=i+1;
      }
      else
      {
          printf("%d%d",c,a[i]);
          i=i+1;
          c=1;
      }
  }
  return 0;
}
  
