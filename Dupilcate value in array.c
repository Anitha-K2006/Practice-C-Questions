#include<stdio.h>
int main()
{
    int n;
    int count;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    count =0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<n;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                break;
            }
        }
    }
    printf("The counts of numbers repeated %d",count);
    return 0;
}
    
