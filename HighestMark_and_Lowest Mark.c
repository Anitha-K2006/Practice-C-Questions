#include <stdio.h>
int main()
{
    int n,max,min;
    int sum;
    float avg;
    scanf("%d",&n);
    int mark[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&mark[i]);
        sum=sum+mark[i];
    }
    max=mark[0];
    min=mark[0];
    for(int i=1;i<n;i++)
    {
        if(mark[i]>max)
        {
            max=mark[i];
        }
        else if(mark[i]<min)
        {
            min=mark[i];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(mark[j]==max)
        {
            printf("The Roll Number %d got the highest mark\n",j+1);
        }
        else if(mark[j]==min)
        {
            printf("The Roll Number %d got the lowest mark\n",j+1);
    }    }
        
    avg=sum/n;
    printf("Sum is %d\n",sum);
    printf("Average is %.2f",avg);
    return 0;
}
