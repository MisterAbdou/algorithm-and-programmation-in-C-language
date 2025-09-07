#include<stdio.h>
#include<stdlib.h>
int main()
{
     int T[8];
     int i,j,tempo;
     for(i=0;i<8;i++)
     {
         printf("[ %d]\t",i+1);
         scanf("%d",&T[i]);
     }
     i=0;tempo=0;
     while(i<8)
     {
         j=i+1;
         while(j<8)
         {
              if(T[j]>T[i])
              {
                     tempo=T[i];
                     T[i]=T[j];
                     T[j]=tempo;
              }
              j++;
         }
         i++;
     }
     for(i=0;i<8;i++)
     {
         printf("%d\t",T[i]);
     }
     return 0;
}