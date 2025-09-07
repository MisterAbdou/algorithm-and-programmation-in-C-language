#include<stdio.h>
#include"utilitaires.h"
#define MAX 100
int main()
{
        int T[MAX];
        int taille;
        int choix;
         printf("donner le nombre d'element:");
         scanf("%d",&taille);
         saisi(T,taille);
         menu();
         printf("Donner votre choix (1,2,3,4 ou 5):");
         scanf("%d",&choix);
         switch( choix)
         {
            case 1 :bulles(T,taille);
                    affiche(T,taille);
                    break;
             case 2: selection(T,taille);
                     affiche(T,taille);
                     break;
             case 3 :insertion(T,taille);
         }
        return 0;
}