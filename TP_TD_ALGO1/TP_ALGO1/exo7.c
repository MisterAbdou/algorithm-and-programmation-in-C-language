#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     int n,nb_aleatoire=0;
     do
     {
         printf("entrez votre nombre:");
         scanf("%d",&n);
     }while((n<0)||(n>=100));

     srand(time(NULL));
     nb_aleatoire=rand()%100;
     int i=0;
     while(i<)
     if(n == nb_aleatoire)
     {
         printf("c'est gagne !");
     }
     else
     {
         if(n > nb_aleatoire)
         printf("c'est plus!");
         else
         printf("c'est moins!");
     }

     return 0;
}