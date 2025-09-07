#include<stdio.h>
#include"insertion.h"
void tr_insertion( int tableau[] , int taille)
{ 
     int i,j;
     int tempo=0;
     for(i= 1;i < taille;i++)
     {
         tempo=tableau[i];
         j=i;
         while( j> 0 && tempo < tableau[j-1]){
              tableau[j]= tableau[j-1];
              j--;
         }
         tableau[j]=tempo;
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