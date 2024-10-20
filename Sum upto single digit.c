#include <stdio.h>

int main() {
    int n,t,a;
    printf("Number");
    scanf("%d",&n);
    int rem;
    while(n>9)
    {
        a=n;
        int sum=0;
        while(a!=0)
        {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
        }
        n=sum;
        
    }
    printf("%d",n);
    return 0;
}
