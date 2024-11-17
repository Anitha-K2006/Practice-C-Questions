#include<stdio.h>
int main()
{
    char name[20],b[20],c[20];
    scanf("%s",name);
    scanf("%s",b);
    int i=0,j=0,k=0;
    while(name[i]!='\0')
    {
        c[k]=name[i];
        i++;
        k++;
    }
    while(b[j]!='\0')
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("New String\n");
    printf("%s",c);
    return 0;
}
