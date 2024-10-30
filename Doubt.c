#include<stdio.h>
int main()
{
    int i,j,next,prev,res,factor,sum=0;
    prev=0;
    next=1;
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        res=prev+next;
        prev=next;
        next=res;
        factor=0;
        for(int j=2;j<=res/2;j++)
        {
            if(res%j==0)
            {
                factor++;
                break;    
            }
        }
        if(factor==0)
        {
            sum=sum+res;
        }
    }
        printf("%d",sum);
        return 0;
}
