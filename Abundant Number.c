#include<stdio.h>
int main()
{
  int n;
  int sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(sum>n)
  {
    printf("True");
  }
  else
  {
    printf("False");
  }
  return 0;
}
