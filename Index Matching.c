#include<stdio.h>
int main()
{
  int n,c;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d,",&arr[i]);
  }
  int t=1;
  for(int i=0;i<=n;i++)
  {
    if(t==arr[i])
    {
      printf("%d",arr[i]);
      c=1;
    }
    t++;
  }
  if(c!=1)
  {
      printf("-1");
  }
}
