#include<stdio.h>
int main()
{
    char name[20],b[20];
    scanf("%s",name);
    int count=0,i=0;
    while(name[i]!='\0')
    {
        b[i]=name[i];
        i++;
    }
    printf("New String\n");
    printf("%s",b);
    return 0;
}
