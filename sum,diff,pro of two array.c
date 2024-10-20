#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num1[n];
    int num2[n];
    int res[n];
    int diff[n];
    int pro[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num1[i]);
       
    }
    for(int j=0;j<n;j++)
    {
       
        scanf("%d",&num2[j]);
    }
    for(int i=0;i<n;i++)
    {
        res[i]=num1[i]+num2[i];
        pro[i]=num1[i]*num2[i];
        diff[i]=num1[i]-num2[i];
    }
    printf("Sum Of Array");
    for(int i=0;i<n;i++)
    {
      printf("%d\t",res[i]);
    }
    printf("\n");
    printf("Product of Array");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",pro[i]);
    }
    printf("\n");
    printf("difference of array");
    for(int i=0;i<n;i++)
    {
       printf("%d\t",diff[i]);
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
