#include<stdio.h>
#include<stdlib.h>
int PGCD(int a ,int b)
{
      if(a == 0){
            
            return b;
      }
      else{
              if(b== 0){
                   return a;
              }
              else{
                     PGCD(b,a%b);
              }
      }
}
int main()
{
     int a,b;
    do
    {
         printf("donner un nombre a:");
         scanf("%d",&a);
    }while(a<=0);
     do
    {
         printf("donner un nombre b:");
         scanf("%d",&b);
    }while(b<=0);
         printf("le PGCD de %d et %d est :%d\n",a,b,PGCD(a,b));

}