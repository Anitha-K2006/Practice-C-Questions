#include <stdio.h>
#include<string.h>
int main() {
   char letter[25];
   scanf("%s",lett);
   int l=0;
   l=strlen(lett);
   int char=0,ascii=0,t;
   for(int i=0;i<l-1;i++)
   {
       t=1;
       if(letter[i]!='%')
       {
       for(int j=i+1;j<l;j++)
       {
           if(letter[i]==letter[j])
           {
               letter[j]='@';
               t++;
           }
       }
       if(((t==1)||(t%2==1))&&(t>char))
       {
           char=t;
           ascii=(int)letter[i];
       }
       }
 }
   printf("%d",ascii);
}
