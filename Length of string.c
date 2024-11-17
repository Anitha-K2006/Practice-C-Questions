#include<stdio.h>
int main()
{
    char name[20];
    scanf("%s",name);
    int count=0,i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string %d",count);
    return 0;
}
