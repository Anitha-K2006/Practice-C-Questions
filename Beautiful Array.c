#include<stdio.h>
void main()
{
    int N,L,c=0,asc=1,des=1;
    scanf("%d%d",&N,&L);
    int arr[L];
    for(int i=0;i<L;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<L;i++)
    {
        if((arr[i]>=1)&&(arr[i]<=N))
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==1)
    {
        for(int i=0;i<L-1;i++)
        {
            for(int j=i+1;j<L;j++)
            {
                if(arr[i]==arr[j])
                {
                    c=0;
                    break;
                }
           }
           if(c==0)
           {
             break;
           }
           
        }
    }
    if(c==1)
    {
        for(int i=0;i<L-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                des++;
            }
            else if(arr[i]<arr[i+1])
            {
                asc++;
            }
            
        }
    }
    if(c==1)
    {
        if((asc==L)||(des==L))
        {
            printf("False");
        }
        else
        {
            printf("True");
        }
    }
    else 
    {
        printf("False");
    }
    
}
    
    
        
