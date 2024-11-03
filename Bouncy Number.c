#include<stdio.h>
int main()
{
    int n,temp,des=0,asc=0,count=0,rem;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    int j=count-1;
    int arr[count];
    while(temp!=0)
    {
        rem=temp%10;
        arr[j]=rem;
        j--;
        temp=temp/10;
    }
    for(int i=0;i<count-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            des++;
        }
        else if(arr[i]<=arr[i+1])
        {
            asc++;
        }
    }
    if((des==count-1)||(asc==count-1))
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}

    
