#include<stdio.h>
#include"trie_bulles.h"
void permuter(int *element_1,int *element_2)
{
     int tempo=0;
     tempo=*element_1 ;
     *element_1=*element_2;
     *element_2=tempo;  
}
//  le trie a bulles consiste a comparer deux elements consecutifs et a les echanger s'ils ne sont pas dans le bon ordre 
// a l'etat i ,on parcours la sequence de maniere a faire remonte le plus petit en t[i]
void trie_bulles(int tableau[],int taille)
{
        while(taille > 0)
        {
            int i=0;
            while(i < taille){
                if(tableau[i] > tableau[i+1]){
                    permuter(&tableau[i],&tableau[i+1]);
                }
                i++;
            }
             taille--;
        }
}
void affiche(int tableau[],int taille)
{
    printf("TABLEAU TRIE \n");
    for(int i= 0; i< taille ; i++)
     {
         printf("[%d] ",tableau[i]);
     }
}