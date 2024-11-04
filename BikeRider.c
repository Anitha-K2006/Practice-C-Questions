#include<stdio.h>
int main()
{
    int N,M,D;
    int Total=1000;
    int Refueling;
    scanf("%d%d%d",&N,&M,&D);
    int i=N*M;
    if(i>=Total)
    {
        printf("1");
    }
    else if(i>=500)
    {
        printf("2");
    }
    else if(i>=D)
    {
        Refueling=Total/D;
        printf("%d",Refueling);
    }
    else if(i<D)
    {
        printf("-1");
    }
    return 0;
} 















