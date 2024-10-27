#include<stdio.h>
int main() 
{
    int n,count=0,num=1,res=1,i;
    scanf("%d",&n);
    while(count<n)
    {
        num++;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                res=0;
                break;
            }
            else
            {
                res=1;
            }
        }
        if(res)
        {
            count++;
        }
    }
    printf("%d",num);
    return 0;
}
