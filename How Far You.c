#include<stdio.h>
int main()
{
    int N,i,sum=0,flooravg;
    int distance;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    flooravg=sum/N;
    int min=0,max=0;
    for(i=0;i<N;i++)
    {
        if(flooravg==arr[i])
        {
            if(min==0)
            {
                min=i;
            }
            max=i;
            
        }
    }
    if(max!=0&&min!=0&&max!=min)
    {
      printf("%d",max-min);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
