#include<stdio.h>
int main()
{
    char name[20],b[20];
    scanf("%s",name);
    scanf("%s",b);
    int l1=0,l2=0,i=0,j=0;
    while(name[i]!='\0')
    {
        l1++;
        i++;
    }
    while(b[j]!='\0')
    {
        l2++;
        j++;
    }
    if(l1==l2)
    {
        int t=1;
        i=0;
        while(i<l1)
        {
            if(name[i]!=b[i])
            {
                t=0;
                break;
            }
            i++;
        }
        if(t==0)
        {
            printf("Not Equal");
        }
        else
        {
            printf("Equal");
        }
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}

