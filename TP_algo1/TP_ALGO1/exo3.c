#include<stdio.h>
#include<stdlib.h>
int main()
{
     int somme,nb5000,nb200,nb100;
     int r;
     // r est le reste de la somme d'argent
     do
    {
      printf(" donner une somme d'argent:");
      scanf("%d",&somme);
    }while(somme<0);
     nb5000=somme/5000;
     r=somme%5000;
     nb200=r/200;
     r=r%200;
     nb100=r/100;
     printf(" la somme  %d FCFA contient :%d 5000 FCFA\n %d 2000 FCFA \n %d 100 FCFA .",somme,nb5000,nb200,nb100);
     return 0;
}