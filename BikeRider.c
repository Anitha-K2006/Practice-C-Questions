#include<stdio.h>
int main()
{
    int Total=1000,Refueling;
    int N,M,D,i;
    scanf("%d%d%d",&N,&M,&D);
    i=N*M;
    if(i>D)
    {
        Refueling=Total/D;
        printf("%d",Refueling);
    }
    else if(i<D)
    {
        printf("-1");
    }
    
}
