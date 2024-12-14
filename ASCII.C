#include <stdio.h>
#include<string.h>
int main() {
   char lett[25];
   scanf("%s",lett);
   int l=0;
   l=strlen(lett);
   int high=0,ascii=0,temp;
   for(int i=0;i<l-1;i++)
   {
       temp=1;
       if(lett[i]!='@')
       {
       for(int j=i+1;j<l;j++)
       {
           if(lett[i]==lett[j])
           {
               lett[j]='@';
               temp++;
           }
       }
       if(((temp==1)||(temp%2==1))&&(temp>high))
       {
           high=temp;
           ascii=(int)lett[i];
       }
       }
 }
   printf("%d",ascii);
}
