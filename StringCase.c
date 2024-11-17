#include<stdio.h>
int main()
{
    char name[20],b[20];
    scanf("%s",name);
    scanf("%s",b);
    int i=0,j=0;
    while(name[i]!='\0')
    {
        if(name[i]>='A'&&name[i]<='Z')
        {
            name[i]=(char)(int)(name[i]+32);
        }
        i++;
    }
    while(b[j]!='\0')
    {
         if(b[j]>='a'&&b[j]<='z')
        {
            b[j]=(char)(int)(b[j]-32);
        }
        j++;
    }
    printf("Lowercase %s",name);
    printf("Uppercase %s",b);
    return 0;
}

