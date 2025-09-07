#include<stdio.h>
#include<stdlib.h>
int main()
{
     int M,N,nb_chiffres,chiffre,chiffres_paires,chiffres_impaires,somme,inverse;

     do
     {
         printf("donner un entier:");
         scanf("%d",&N);
     }while(N<0);
     
     nb_chiffres=0;chiffre=0,chiffres_paires=0;chiffres_impaires=0;somme=0;inverse=0;
     M=N;
     
     while(N!=0)
     {
         chiffre=N%10;
         nb_chiffres++;
         somme+=chiffre;
         inverse=(inverse*10)+chiffre;
         if(chiffre%2==0)
         {
           chiffres_paires++;
         }
         else
         {
         chiffres_impaires++;
         }
        N/=10;
     }
     printf("le chiffre %d contient %d chiffres:%d chiffres pairs et %d chiffres impairs,la somme est :%d et l'inverse est :%d\n",
     M,nb_chiffres,chiffres_paires,chiffres_impaires,somme,inverse);

     return 0;
}